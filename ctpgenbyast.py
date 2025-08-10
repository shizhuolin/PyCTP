#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Thu Aug  7 17:28:57 2025

@author: zhuolin.shi
"""

def file_read(filename):
    import chardet
    with open(filename, 'rb') as f:
        data = f.read()
        encoding = chardet.detect(data)
        sourcecode = data.decode(encoding['encoding'])
    return sourcecode

def file_save(filename, content):
    with open(filename, 'wt') as f:
        f.write(content)
    print('save:', filename)
    
def cpp_file_parse(filename):
    import os
    from clang.cindex import Index, Config, CursorKind, TranslationUnit
    from tempfile import NamedTemporaryFile
    include_path = os.path.dirname(filename)
    sourcecode = file_read(filename)
    with NamedTemporaryFile("w", encoding="utf-8", suffix=".tmp", delete=False) as tmp:
        tmp.write(sourcecode)
        tmp_filename = tmp.name
    index = Index.create()
    tu = index.parse(tmp_filename, args=['-x', 'c++', f'-I{include_path}', '-std=c++11'], options=TranslationUnit.PARSE_DETAILED_PROCESSING_RECORD)
    return filename, sourcecode, tu

def extract_comment(source_lines, location):
    from clang.cindex import Index, Config, CursorKind, TranslationUnit, SourceLocation
    # Backtrack to get preceding comment
    if type(location) == int:
        line_index = location
    elif type(location) == SourceLocation:
        line_index = location.line - 1 #base 
    else:
        raise ValueError(location)
    comment_lines = []
    i = line_index - 1
    while i >= 0:
        line = source_lines[i].strip()
        if line.startswith('//') or line.startswith('/*') or line.endswith('*/'):
            comment_lines.insert(0, line)
            i -= 1
        elif line == '':
            i -= 1  # Allow blank line between comments
        else:
            break
    return comment_lines

def gencode_from_template(template_filename, replace, generate_filename=None):
    from string import Template
    template = file_read( template_filename )
    t = Template(template)
    output = t.substitute(replace)
    if generate_filename:
        file_save(generate_filename, output)
    return output

def get_field_type_name(t):
    from clang.cindex import TypeKind
    
    if t.kind == TypeKind.CONSTANTARRAY:
        element_type = get_field_type_name(t.element_type)
        return element_type, t.element_count
    
    elif t.kind == TypeKind.ELABORATED:
        t1 = t.get_named_type()
        name = t1.spelling
        return get_field_type_name(t1)
    
    elif t.kind == TypeKind.TYPEDEF:
        return get_field_type_name(t.get_canonical())
    
    else:
        return t.spelling
        
def generate_macro_code(AST_ApiDataType, cpython_path):
    from clang.cindex import Index, Config, CursorKind, TranslationUnit, SourceLocation
    import os, re
    template_filename = os.path.join(cpython_path, 'UserApiDataType.cpp.template')
    generate_filename = os.path.join(cpython_path, 'UserApiDataType.cpp')
    cpp_filename, cpp_sourcecode, cpp_tu = AST_ApiDataType
    source_lines = cpp_sourcecode.splitlines()
    cppsourcecode = ''
    for child in cpp_tu.cursor.get_children():
        # enum
        if child.kind == CursorKind.ENUM_DECL and child.spelling.startswith('THOST_TE'):
            comment = '\n\t'.join(extract_comment(source_lines, child.location)).strip()
            cppsourcecode += f'\t{comment}\n'
            
            for node in child.get_children():
                if node.kind == CursorKind.ENUM_CONSTANT_DECL:
                    comment = '\n\t'.join(extract_comment(source_lines, node.location)).strip()
                    cppsourcecode += f'\t{comment}\n'
                    
                    if type(node.enum_value) == int:
                        cppsourcecode += f'\tif( PyModule_AddIntMacro(m, {node.spelling}) < 0 ) return -1;\n'
        # define
        elif child.kind == CursorKind.MACRO_DEFINITION and child.spelling.startswith('THOST_FTDC_'):
            location = child.location
            macro_line = location.line - 1 #base 
            macro_name = child.spelling
            
            # Read tokens to get macro value
            tokens = list(cpp_tu.get_tokens(extent=child.extent))
            rhs_tokens = []
            seen_name = False
            for tok in tokens:
                if not seen_name and tok.spelling == macro_name:
                    seen_name = True
                    continue
                if seen_name:
                    rhs_tokens.append(tok.spelling)
            macro_value = ' '.join(rhs_tokens).strip()
            
            # Backtrack to get preceding comment
            comment = '\n\t'.join(extract_comment(source_lines, child.location)).strip()
            cppsourcecode += f'\t{comment}\n'
            
            if re.search(r'^\'.\'$', macro_value ):
                cppsourcecode += f'\tif( PyModule_AddCharMacro(m, {macro_name}) < 0 ) return -1;\n'
            elif re.search(r'^\'.{2,}\'$', macro_value ):
                cppsourcecode += f'\tif( PyModule_AddStrConstant(m, "{macro_name}", "'+macro_value.strip("'")+'") < 0 ) return -1;\n'
            else:
                raise ValueError((cpp_filename, macro_line, macro_name, macro_value))
                
    gencode_from_template(template_filename, {'body': cppsourcecode}, generate_filename)

def generate_struct_cppheader_code(AST_ApiStruct, cpython_path):
    from clang.cindex import Index, Config, CursorKind, TranslationUnit, SourceLocation
    import os
    cpp_filename, cpp_sourcecode, cpp_tu = AST_ApiStruct
    source_lines = cpp_sourcecode.splitlines()
    
    template_filename = os.path.join(cpython_path, 'UserApiStruct.h_all.template')
    generate_filename = os.path.join(cpython_path, 'UserApiStruct.h')
    cppheadercode = ''
    for struct in cpp_tu.cursor.get_children():
        if struct.kind == CursorKind.STRUCT_DECL and struct.spelling.startswith('CThostFtdc'):
            struct_name = struct.spelling
            cppheadercode += f'#include "UserApiStruct/Py{struct_name}.h"\n'
    gencode_from_template(template_filename, {'cppheadercode': cppheadercode}, generate_filename)
    
    template_filename = os.path.join(cpython_path, 'UserApiStruct.h.template')
    for struct in cpp_tu.cursor.get_children():
        if struct.kind == CursorKind.STRUCT_DECL and struct.spelling.startswith('CThostFtdc'):
            struct_comment = '\n'.join(extract_comment(source_lines, struct.location)).strip()
            struct_name = struct.spelling
            STRUCT_NAME = struct_name.upper()
            generate_filename = os.path.join(cpython_path, f'UserApiStruct/Py{struct_name}.h')
            gencode_from_template(template_filename, {'comment': struct_comment, 'struct_name': struct_name
                                                      ,'STRUCT_NAME': STRUCT_NAME}, generate_filename)
            
def generate_struct_cppsource_code(AST_ApiStruct, cpython_path):
    from clang.cindex import Index, Config, CursorKind, TranslationUnit, SourceLocation
    import os
    cpp_filename, cpp_sourcecode, cpp_tu = AST_ApiStruct
    source_lines = cpp_sourcecode.splitlines()

    def get_type_double_code(struct_name, struct_inst_prefix_name, member_comment, member_name, member_type_name, member_field_type_name, member_field_type_len):
        assert(member_field_type_len==0)
        _dec = f'''
    {member_comment}
    // {member_type_name} {member_field_type_name}
    double {struct_inst_prefix_name}_{member_name} = 0.0;
        '''
        _inp = 'd'
        _ref = f'        , &{struct_inst_prefix_name}_{member_name} \n'
        _sett = f'''
    {member_comment}
    // {member_type_name} {member_field_type_name}
    self->data.{member_name} = {struct_inst_prefix_name}_{member_name};
        '''
        _out = 'd'
        _out_var = f'        ,"{member_name}", self->data.{member_name} \n'
        _getset_body = f'''
{member_comment}
// {member_type_name} {member_field_type_name}
static PyObject *Py{struct_name}_get_{member_name}(Py{struct_name} *self, void *closure) {{
    return PyFloat_FromDouble(self->data.{member_name});
}}

{member_comment}
// {member_type_name} {member_field_type_name}
static int Py{struct_name}_set_{member_name}(Py{struct_name} *self, PyObject* val, void *closure) {{
    if (!PyFloat_Check(val)) {{
        PyErr_SetString(PyExc_TypeError, "{member_name} Expected float");
        return -1;
    }}
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {{
        return -1;
    }}
    self->data.{member_name} = buf;
    return 0;
}}
        '''
        return dict(dec=_dec, inp=_inp, ref=_ref, sett=_sett, out=_out, out_var=_out_var, getset_body=_getset_body)
    
    def get_type_short_code(struct_name, struct_inst_prefix_name, member_comment, member_name, member_type_name, member_field_type_name, member_field_type_len):
        assert(member_field_type_len==0)
        _dec = f'''
    {member_comment}
    // {member_type_name} {member_field_type_name}
    short {struct_inst_prefix_name}_{member_name} = 0;
        '''
        _inp = 'h'
        _ref = f'        , &{struct_inst_prefix_name}_{member_name} \n'
        _sett = f'''
    {member_comment}
    // {member_type_name} {member_field_type_name}
    self->data.{member_name} = {struct_inst_prefix_name}_{member_name};
        '''
        _out = 'h'
        _out_var = f'        ,"{member_name}", self->data.{member_name} \n'
        _getset_body = f'''
{member_comment}
// {member_type_name} {member_field_type_name}
static PyObject *Py{struct_name}_get_{member_name}(Py{struct_name} *self, void *closure) {{
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.{member_name});
#else
    return PyInt_FromLong(self->data.{member_name});
#endif
}}

{member_comment}
// {member_type_name} {member_field_type_name}
static int Py{struct_name}_set_{member_name}(Py{struct_name} *self, PyObject* val, void *closure) {{
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {{
        PyErr_SetString(PyExc_TypeError, "{member_name} Expected short");
#else
    if (!PyInt_Check(val)) {{
        PyErr_SetString(PyExc_TypeError, "{member_name} Expected short");
#endif
        return -1;
    }}
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {{ 
        return -1;
    }}
    if (buf < SHRT_MIN || buf > SHRT_MAX) {{
        PyErr_SetString(PyExc_OverflowError, "the {member_name} value out of range for C short");
        return -1;
    }}
    self->data.{member_name} = (short)buf;
    return 0;
}}
        '''
        return dict(dec=_dec, inp=_inp, ref=_ref, sett=_sett, out=_out, out_var=_out_var, getset_body=_getset_body)
    
    def get_type_int_code(struct_name, struct_inst_prefix_name, member_comment, member_name, member_type_name, member_field_type_name, member_field_type_len):
        assert(member_field_type_len==0)
        _dec = f'''
    {member_comment}
    // {member_type_name} {member_field_type_name}
    int {struct_inst_prefix_name}_{member_name} = 0;
        '''
        _inp = 'i'
        _ref = f'        , &{struct_inst_prefix_name}_{member_name} \n'
        _sett = f'''
    {member_comment}
    // {member_type_name} {member_field_type_name}
    self->data.{member_name} = {struct_inst_prefix_name}_{member_name};
        '''
        _out = 'i'
        _out_var = f'        ,"{member_name}", self->data.{member_name} \n'
        _getset_body = f'''
{member_comment}
// {member_type_name} {member_field_type_name}
static PyObject *Py{struct_name}_get_{member_name}(Py{struct_name} *self, void *closure) {{
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.{member_name});
#else
    return PyInt_FromLong(self->data.{member_name});
#endif
}}

{member_comment}
// {member_type_name} {member_field_type_name}
static int Py{struct_name}_set_{member_name}(Py{struct_name} *self, PyObject* val, void *closure) {{
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {{
        PyErr_SetString(PyExc_TypeError, "{member_name} Expected long");
#else
    if (!PyInt_Check(val)) {{
        PyErr_SetString(PyExc_TypeError, "{member_name} Expected int");
#endif
        return -1;
    }}
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {{
        return -1;
    }}
    if (buf < INT_MIN || buf > INT_MAX) {{
        PyErr_SetString(PyExc_OverflowError, "the {member_name} value out of range for C int");
        return -1;
    }}
    self->data.{member_name} = (int)buf;
    return 0;
}}
        '''
        return dict(dec=_dec, inp=_inp, ref=_ref, sett=_sett, out=_out, out_var=_out_var, getset_body=_getset_body)
    
    def get_type_char_code(struct_name, struct_inst_prefix_name, member_comment, member_name, member_type_name, member_field_type_name, member_field_type_len):
        if member_field_type_len:
            _dec = f'''
    {member_comment}
    // {member_type_name} {member_field_type_name}[{member_field_type_len}]
    const char *{struct_inst_prefix_name}_{member_name} = NULL;
    Py_ssize_t {struct_inst_prefix_name}_{member_name}_len = 0;
            '''
            _inp = 'y#'
            _ref = f'        , &{struct_inst_prefix_name}_{member_name}, &{struct_inst_prefix_name}_{member_name}_len \n'
            _sett = f'''
    {member_comment}
    // {member_type_name} {member_field_type_name}[{member_field_type_len}]
    if( {struct_inst_prefix_name}_{member_name} != NULL ) {{
        if({struct_inst_prefix_name}_{member_name}_len > (Py_ssize_t)sizeof(self->data.{member_name})) {{
            PyErr_Format(PyExc_ValueError, "{member_name} too long: length=%zd (max allowed is %zd)", {struct_inst_prefix_name}_{member_name}_len, (Py_ssize_t)sizeof(self->data.{member_name}));
            return -1;
        }}
        // memset(self->data.{member_name}, 0, sizeof(self->data.{member_name}));
        // memcpy(self->data.{member_name}, {struct_inst_prefix_name}_{member_name}, {struct_inst_prefix_name}_{member_name}_len);        
        strncpy(self->data.{member_name}, {struct_inst_prefix_name}_{member_name}, sizeof(self->data.{member_name}) );
        {struct_inst_prefix_name}_{member_name} = NULL;
    }}
            '''
            #_out = 'y#'
            _out = 'y'
            _out_var = f'        ,"{member_name}", self->data.{member_name}//, (Py_ssize_t)sizeof(self->data.{member_name}) \n'
            _getset_body = f'''
{member_comment}
// {member_type_name} {member_field_type_name}[{member_field_type_len}]
static PyObject *Py{struct_name}_get_{member_name}(Py{struct_name} *self, void *closure) {{
    //return PyBytes_FromStringAndSize(self->data.{member_name}, (Py_ssize_t)sizeof(self->data.{member_name}));
    return PyBytes_FromString(self->data.{member_name});
}}

{member_comment}
// {member_type_name} {member_field_type_name}[{member_field_type_len}]
static int Py{struct_name}_set_{member_name}(Py{struct_name} *self, PyObject* val, void *closure) {{
    if (!PyBytes_Check(val)) {{
        PyErr_SetString(PyExc_TypeError, "{member_name} Expected bytes");
        return -1;
    }}
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.{member_name})) {{
        PyErr_SetString(PyExc_ValueError, "{member_name} must be less than {member_field_type_len} bytes");
        return -1;
    }}
    // memset(self->data.{member_name}, 0, sizeof(self->data.{member_name}));
    // memcpy(self->data.{member_name}, buf, len);
    strncpy(self->data.{member_name}, buf, sizeof(self->data.{member_name}));
    return 0;
}}
            '''
        else:
            _dec = f'''
    {member_comment}
    // {member_type_name} {member_field_type_name}
    char {struct_inst_prefix_name}_{member_name} = 0;
            '''
            _inp = 'c'
            _ref = f'        , &{struct_inst_prefix_name}_{member_name} \n'
            _sett = f'''
    {member_comment}
    // {member_type_name} {member_field_type_name}
    self->data.{member_name} = {struct_inst_prefix_name}_{member_name};
            '''
            _out = 'c'
            _out_var = f'        ,"{member_name}", self->data.{member_name} \n'
            _getset_body = f'''
{member_comment}
// {member_type_name} {member_field_type_name}
static PyObject *Py{struct_name}_get_{member_name}(Py{struct_name} *self, void *closure) {{
    return PyBytes_FromStringAndSize(&(self->data.{member_name}), 1);
}}

{member_comment}
// {member_type_name} {member_field_type_name}
static int Py{struct_name}_set_{member_name}(Py{struct_name} *self, PyObject* val, void *closure) {{
    if (!PyBytes_Check(val)) {{
        PyErr_SetString(PyExc_TypeError, "{member_name} Expected bytes");
        return -1;
    }}
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.{member_name})) {{
        PyErr_SetString(PyExc_ValueError, "{member_name} must be equal 1 bytes");
        return -1;
    }}
    self->data.{member_name} = *buf;
    return 0;
}}
            '''
        return dict(dec=_dec, inp=_inp, ref=_ref, sett=_sett, out=_out, out_var=_out_var, getset_body=_getset_body)
    
    callback = {'short':get_type_short_code, 'int':get_type_int_code
                , 'double': get_type_double_code, 'char': get_type_char_code}
    
    template_filename = os.path.join(cpython_path, 'UserApiStruct.cpp_all.template')
    generate_filename = os.path.join(cpython_path, 'UserApiStruct.cpp')
    cppsourcecode = ''
    for struct in cpp_tu.cursor.get_children():
        if struct.kind == CursorKind.STRUCT_DECL and struct.spelling.startswith('CThostFtdc'):
            struct_comment = '\n\t'.join(extract_comment(source_lines, struct.location)).strip()
            struct_name = struct.spelling
            cppsourcecode += f'\t{struct_comment}\n'
            cppsourcecode += f'\tif( Py{struct_name}Type_init(module) < 0 ) return -1;\n'
    gencode_from_template(template_filename, {'cppsourcecode': cppsourcecode}, generate_filename)
    
    template_filename = os.path.join(cpython_path, 'UserApiStruct.cpp.template')
    for struct in cpp_tu.cursor.get_children():
        if struct.kind == CursorKind.STRUCT_DECL and struct.spelling.startswith('CThostFtdc'):
            struct_comment = '\n'.join(extract_comment(source_lines, struct.location)).strip()
            struct_name = struct.spelling
            STRUCT_NAME = struct_name.upper()
            struct_inst_prefix_name = struct_name.replace("CThostFtdc", '')
            cpp_code_keywordslist = ''
            cpp_code_declaration = ''
            cpp_code_keywordss = ''
            cpp_code_refcode = ''
            cpp_code_setcode = ''
            cpp_code_outformat = ''
            cpp_code_outvarlist = ''
            cpp_code_methodbody = ''
            cpp_code_getsetlist = ''
            for member in struct.get_children():
                if member.kind != CursorKind.FIELD_DECL: continue
                member_comment = '\n'.join(extract_comment(source_lines, member.location)).strip()
                member_name = member.spelling
                member_type_name = member.type.spelling
                member_field_type_name = get_field_type_name(member.type)
                member_field_type_len = 0
                if type(member_field_type_name) == tuple:
                    member_field_type_name, member_field_type_len = member_field_type_name
                ret = callback[member_field_type_name](struct_name = struct_name, struct_inst_prefix_name=struct_inst_prefix_name
                                                       , member_comment = member_comment
                                                       , member_name = member_name
                                                       , member_type_name = member_type_name
                                                       , member_field_type_name = member_field_type_name
                                                       , member_field_type_len = member_field_type_len)
                cpp_code_keywordslist += f'"{member_name}", '
                cpp_code_declaration += ret['dec']
                cpp_code_keywordss += ret['inp']
                cpp_code_refcode += ret['ref']
                cpp_code_setcode += ret['sett']
                cpp_code_outformat += ",s:" + ret['out']
                cpp_code_outvarlist += ret['out_var']
                cpp_code_methodbody += ret['getset_body']
                cpp_code_getsetlist += f'    {member_comment} \n'
                cpp_code_getsetlist += f'    {{(char *)"{member_name}", (getter)Py{struct_name}_get_{member_name}, (setter)Py{struct_name}_set_{member_name}, (char *)"{member_name}", NULL}},\n'
            cpp_code_outformat = cpp_code_outformat.strip(',')
            generate_filename = os.path.join(cpython_path, f'UserApiStruct/Py{struct_name}.cpp')
            gencode_from_template(template_filename, {'struct_comment': struct_comment
                                                      , 'struct_name': struct_name
                                                      , 'STRUCT_NAME': STRUCT_NAME
                                                      , 'cpp_code_keywordslist': cpp_code_keywordslist
                                                      , 'cpp_code_declaration': cpp_code_declaration
                                                      , 'cpp_code_keywordss': cpp_code_keywordss
                                                      , 'cpp_code_keywordss_py2': cpp_code_keywordss.replace('y#', 's#')
                                                      , 'cpp_code_refcode': cpp_code_refcode
                                                      , 'cpp_code_setcode': cpp_code_setcode
                                                      , 'cpp_code_outformat': cpp_code_outformat
                                                      #, 'cpp_code_outformat_py2': cpp_code_outformat.replace('y#', 's#')
                                                      , 'cpp_code_outformat_py2': cpp_code_outformat.replace('y', 's')
                                                      , 'cpp_code_outvarlist': cpp_code_outvarlist
                                                      , 'cpp_code_methodbody': cpp_code_methodbody
                                                      , 'cpp_code_getsetlist': cpp_code_getsetlist
                                                      }, generate_filename)

def generate_api_cppsource_code(AST_Api, cpython_path, template_filename, generate_filename, spiclass_name, apiclass_name, apimethod_exclude=[]):
    from clang.cindex import Index, Config, CursorKind, TranslationUnit, SourceLocation, TypeKind
    from types import SimpleNamespace
    import os, re
    cpp_filename, cpp_sourcecode, cpp_tu = AST_Api
    source_lines = cpp_sourcecode.splitlines()
    # CThostFtdc%sApi
    PYAPICLASS_FLAG = re.match(r'CThostFtdc(.*)Api', apiclass_name).group(1).upper()
    
    def get_default_value(arg_cursor):
        tokens = list(arg_cursor.get_tokens())
        for i, tok in enumerate(tokens):
            if tok.spelling == "=":
                # 拼接 = 后面的所有 token
                return ' '.join(t.spelling for t in tokens[i+1:])
        return None
    
    def get_method_param(method):
        method_param = []
        for arg in method.get_arguments():
            if arg.kind != CursorKind.PARM_DECL: continue
            if arg.type.kind == TypeKind.POINTER:
                method_param.append(SimpleNamespace(IsPointer=True, Type=arg.type.get_pointee().spelling, Name=arg.spelling, Default=get_default_value(arg)))
            else:
                method_param.append(SimpleNamespace(IsPointer=False, Type=arg.type.spelling, Name=arg.spelling, Default=get_default_value(arg)))
        return method_param
    
    def get_method_param_string(method_param):
        out_arr = []
        for param in method_param:
            pointer_flag = '*' if param.IsPointer else ''
            default_flag = f' = {param.Default}' if param.Default else ''
            out_arr.append( f'{param.Type} {pointer_flag}{param.Name}{default_flag}' )
        return ', '.join(out_arr)
    
    spibody = ''
    for classnode in cpp_tu.cursor.get_children():
        if not (classnode.kind == CursorKind.CLASS_DECL and classnode.spelling == spiclass_name): continue
        class_name = classnode.spelling
        for method in classnode.get_children():
            if not (method.kind == CursorKind.CXX_METHOD and method.is_virtual_method() and method.result_type.kind == TypeKind.VOID and method.spelling.startswith('On')): continue
            method_comment = '\n\t\t\t'.join(extract_comment(source_lines, method.location)).strip()
            method_name = method.spelling
            method_param = get_method_param(method)
                        
            spibody += f'''
            {method_comment}
			virtual void {method_name}({get_method_param_string(method_param)}) {{
                PyGILState_STATE gstate = PyGILState_Ensure();\n'''
            for param in method_param:
                if param.IsPointer:
                    spibody += f'			    Py{param.Type} *Py{param.Name} = NULL; \n'
                    spibody += f'			    PyObject *Py{param.Name}_callarg = NULL; \n'
                else:
                    spibody += f'			    PyObject *Py{param.Name} = NULL; \n'
            spibody += '			    PyObject *result = NULL; \n'
            for param in method_param:
                if param.Type == 'int':
                    spibody += f'''
                Py{param.Name} = PyLong_FromLong({param.Name});
                if(!Py{param.Name}) goto cleanup;
                    '''
                elif param.Type == 'bool':
                    spibody += f'''
                Py{param.Name} = PyBool_FromLong({param.Name});
                if (!Py{param.Name}) goto cleanup;
                    '''
                elif param.IsPointer:
                    spibody += f'''
                Py{param.Name} = PyObject_New(Py{param.Type}, &Py{param.Type}Type);
                if (!Py{param.Name}) goto cleanup;
                Py{param.Name}_callarg = (PyObject *)Py{param.Name};
                if ({param.Name}) {{ Py{param.Name}->data = *{param.Name}; }} else {{ Py{param.Name}_callarg = Py_None; }}
                    '''
            if method_param:
                callback_param_format = 'O' * len(method_param)
                callback_param_varnames = ', '.join([f'Py{param.Name}_callarg' if param.IsPointer else f'Py{param.Name}' for param in method_param])
                spibody += f'''
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("{callback_param_format}"), {callback_param_varnames});
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("{method_name}"), const_cast<char *>("{callback_param_format}"), {callback_param_varnames});
                '''
            else:
                spibody += f'''
                // result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), NULL);
                result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("{method_name}"), NULL);
                '''
            spibody += 'if(!result) PyErr_Print();\n\n'
            if method_param:
                spibody += '                cleanup:\n'
            for param in method_param:
                spibody += f'                    Py_XDECREF(Py{param.Name});\n'
            spibody += '\t\t\t\t\tPy_XDECREF(result);\n'
            spibody += '\t\t\t\t\tPyGILState_Release(gstate);\n\t\t\t}\n'
    
    apibody = ''
    for classnode in cpp_tu.cursor.get_children():
        if not (classnode.kind == CursorKind.CLASS_DECL and classnode.spelling == apiclass_name): continue
        class_name = classnode.spelling
        for method in classnode.get_children():
            if not method.kind == CursorKind.CXX_METHOD: continue
            if method.spelling in apimethod_exclude: continue
            method_comment = extract_comment(source_lines, method.location)
            method_name = method.spelling
            method_IsStatic = method.is_static_method()
            method_IsVirtual = method.is_virtual_method()
            method_return_type = get_field_type_name(method.result_type)
            method_param = get_method_param(method)
            apibody += '\n'.join(method_comment) + '\n'
            if (not method_IsStatic and method_IsVirtual and method_return_type == 'void' and len(method_param) == 0):
                apibody += f'PyCTP_{PYAPICLASS_FLAG}_FUNCTION_MAGIC({method_name}) \n'
            elif (not method_IsStatic and method_IsVirtual and method_return_type == 'int' and len(method_param) == 0):
                apibody += f'PyCTP_{PYAPICLASS_FLAG}_FUNCTION_MAGIC_INT({method_name}) \n'
            elif (not method_IsStatic and method_IsVirtual and method_return_type == 'const char *' and len(method_param) == 0):
                apibody += f'PyCTP_{PYAPICLASS_FLAG}_FUNCTION_MAGIC_STRING({method_name}) \n'
            elif (not method_IsStatic and method_IsVirtual and method_return_type == 'void' and len(method_param)==1 
                  and method_param[0].IsPointer and method_param[0].Type=='char'):
                apibody += f'PyCTP_{PYAPICLASS_FLAG}_FUNCTION_MAGIC_VOID_STRING({method_name}) \n'
            elif (not method_IsStatic and method_IsVirtual and method_return_type == 'void' and len(method_param)==1 
                  and method_param[0].IsPointer and method_param[0].Type.startswith('CThostFtdc')):
                apibody += f'PyCTP_{PYAPICLASS_FLAG}_FUNCTION_MAGIC_VOID_STRUCT({method_name}, {method_param[0].Type}) \n'
            elif (not method_IsStatic and method_IsVirtual and method_return_type == 'int' and len(method_param)==1 
                  and method_param[0].IsPointer and method_param[0].Type.startswith('CThostFtdc')):
                apibody += f'PyCTP_{PYAPICLASS_FLAG}_FUNCTION_MAGIC_INT_STRUCT({method_name}, {method_param[0].Type}) \n'
            elif (not method_IsStatic and method_IsVirtual and method_return_type == 'int' and len(method_param)==2
                and method_param[0].IsPointer and method_param[0].Type.startswith('CThostFtdc')
                and not method_param[1].IsPointer and method_param[1].Type == 'int'):
                apibody += f'PyCTP_{PYAPICLASS_FLAG}_FUNCTION_MAGIC_INT_STRUCT_INT({method_name}, {method_param[0].Type}) \n'
            elif (not method_IsStatic and method_IsVirtual and method_return_type == 'int' and len(method_param)==2
                and not method_param[0].IsPointer and method_param[0].Type == 'char *[]'
                and not method_param[1].IsPointer and method_param[1].Type == 'int'):
                apibody += f'PyCTP_{PYAPICLASS_FLAG}_FUNCTION_MAGIC_INT_SUBSCRIBE({method_name}) \n'
            else:
                raise ValueError(f'{method_return_type} {method_name}({get_method_param_string(method_param)})')
            apibody += '\n'
    
    apilist = ''
    for classnode in cpp_tu.cursor.get_children():
        if not (classnode.kind == CursorKind.CLASS_DECL and classnode.spelling == apiclass_name): continue
        for method in classnode.get_children():
            if not method.kind == CursorKind.CXX_METHOD: continue
            method_comment = extract_comment(source_lines, method.location)
            method_name = method.spelling
            method_IsStatic = method.is_static_method()
            method_IsVirtual = method.is_virtual_method()
            method_return_type = get_field_type_name(method.result_type)
            method_param = get_method_param(method)
            METH_VARARGS_FLAG = 'METH_VARARGS' if method_param else 'METH_NOARGS'
            if method_IsStatic: continue
            apilist += '\t' + '\n\t'.join(method_comment) + '\n'
            apilist += f'    {{"{method_name}", CTP_THOST_FTDC_{PYAPICLASS_FLAG}_API_{method_name}, {METH_VARARGS_FLAG}, nullptr}},\n\n'
            
    template_filename = os.path.join(cpython_path, template_filename)
    generate_filename = os.path.join(cpython_path, generate_filename)
    gencode_from_template(template_filename, {'spibody': spibody, 'apibody': apibody, 'apilist': apilist}, generate_filename)
    
def generate_cpp_from_ctp(cpp_path, cpython_path):
    import os
    AST_ApiDataType = cpp_file_parse(os.path.join(cpp_path, 'ThostFtdcUserApiDataType.h'))
    AST_ApiStruct = cpp_file_parse(os.path.join(cpp_path, 'ThostFtdcUserApiStruct.h'))
    AST_MdApi = cpp_file_parse(os.path.join(cpp_path, 'ThostFtdcMdApi.h'))
    AST_TraderApi = cpp_file_parse(os.path.join(cpp_path, 'ThostFtdcTraderApi.h'))
    
    # from UserApiDataType.cpp.template to UserApiDataType.cpp.template
    generate_macro_code(AST_ApiDataType, cpython_path)
    
    # from UserApiStruct.h.template UserApiStruct.h_all.template
    generate_struct_cppheader_code(AST_ApiStruct, cpython_path)
    
    # from UserApiStruct.cpp.template UserApiStruct.cpp_all.template
    generate_struct_cppsource_code(AST_ApiStruct, cpython_path)
    
    # from ./src/MdApi.cpp.template
    generate_api_cppsource_code(AST_MdApi, cpython_path, 'MdApi.cpp.template', 'MdApi.cpp', 'CThostFtdcMdSpi', 'CThostFtdcMdApi', ['CreateFtdcMdApi', 'GetApiVersion', 'RegisterSpi', 'Release', '~CThostFtdcMdApi'])
    
    # from ./src/TraderApi.cpp.template
    generate_api_cppsource_code(AST_TraderApi, cpython_path, 'TraderApi.cpp.template', 'TraderApi.cpp', 'CThostFtdcTraderSpi', 'CThostFtdcTraderApi', ['CreateFtdcTraderApi', 'GetApiVersion', 'RegisterSpi', 'Release', '~CThostFtdcTraderApi', 'SubscribePrivateTopic', 'SubscribePublicTopic'])
    
###################################################################################################################################
ctp_cpp_path = './ctp/v6.7.9_P1_20250319/api/v6.7.9_P1_20250319_traderapi/v6.7.9_P1_20250319_traderapi/v6.7.9_P1_20250319_api_traderapi_linux64/v6.7.9_P1_20250319_api/v6.7.9_P1_20250319_api_traderapi_se_linux64'
# ctp_cpp_path = './v6.6.9_20220914_95719.2466/v6.6.9_20220914_api/v6.6.9_20220914_20220914_api_tradeapi_se_linux64'
# ctp_cpp_path = './ctp/v6.6.2_P11_SM_20221103/api/v6.6.2_P11_SM_tradeapi/v6.6.2_P11_SM_20221025_api/v6.6.2_P11_SM_20221025_api_tradeapi_sm_linux64'
# ctp_cpp_path = './ctp/v6.7.0_CP_20230303/api/v6.7.0_CP_traderapi_20230303/v6.7.0_CP_20230303_api/v6.7.0_CP_20230303_api_tradeapi_se_linux64'
# ctp_cpp_path = './ctp/v6.7.9_20241224/api/v6.7.9_traderapi_20241224/v6.7.9_20241224_traderapi/v6.7.9_20241224_api_traderapi_linux64/v6.7.9_20241224_api/v6.7.9_20241224_api_traderapi_se_linux64'
###################################################################################################################################
ctp_cpython_path = './src'
generate_cpp_from_ctp(ctp_cpp_path, ctp_cpython_path)