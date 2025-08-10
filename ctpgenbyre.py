#!/usr/bin/python
# -*- coding: UTF-8 -*-
# convert ctp to pyctp

def structmember(bodycode):
  import re
  ret = []
  iterater = re.finditer(r"[\n^]\s*(?P<type>[a-zA-Z][ \w]*[\s\*])(?P<name>[a-zA-Z]\w*)([ \t]*\[[ \t]*(?P<length>\d+)[ \t]*\])?\s*;", bodycode)
  for i in iterater:
    d = i.groupdict()
    ret.append( dict(name=d['name'].strip(), type=d['type'].strip()) )
  return ret

def enummember(bodycode):
  ret = []
  inc = 0
  for item in bodycode.split(','):
    arr = item.split('=')
    key = arr[0].strip()
    if len(arr)==2:
      inc = int(arr[1])
    val = inc
    ret.append( dict(name=key, value=val) )
    inc += 1
  return ret

def classparser(codetree, code):
  import re
  classname = code[:code.index('{')].split(' ')[-1].strip()
  iterater = re.finditer(r"[\n^]\s*(?P<type>.+)\((?P<param>.+)?\)\s*", code)
  #print('-----', classname , '----------')
  methods = []
  for i in iterater:
    method = i.groupdict()
    names = method['type'].split(' ')
    param = method['param']
    method_name = names[-1]
    method_type = names[-2] if len(names)>1 else None
    method_param = []
    if param:
      params = param.split(',')
      for param in params:
        p = param.strip().split('=')
        defval = None
        if len(p)==2:
          key = p[-2]
          defval = p[-1]
        else:
          key = p[-1]
        keys = key.strip().split(' ')
        p_type = keys[-2]
        p_name = keys[-1]
        p_defv = defval
        if p_type == '*':
          p_type = keys[-3]
          p_name = '*'+p_name
        #print(p_type, p_name, p_defv )
        method_param.append( dict(type=p_type, name=p_name, default=p_defv) )
    #print( method_type , method_name, method_param )
    methods.append(dict(name=method_name, type=method_type, param=method_param))
  return dict(type='class', name=classname, methods=methods)

def structure(filename):
  import re, chardet
  
  with open(filename, 'rb') as f:
    data = f.read()
    
  encoding = chardet.detect(data)
  sourcecode = data.decode(encoding['encoding'])
  
  ret = {}
  
  # remove all comments
  sourcecode = re.sub(r"//[^\n]*", "", sourcecode)
  sourcecode = re.sub(r"/\*[.\r\n]*\*/", "", sourcecode)

  #define
  iterater = re.finditer(r"[\n^]\s*#define\s+(?P<name>[a-zA-Z]\w*(\([^\)]*\))?)([ \t]+(?P<value>.*))?(?!\\)\r?\n", sourcecode)
  for i in iterater:
    define = i.groupdict()
    ret[define['name']] = dict(type='#define', value=define['value'])
    # print("#define [{0}] [{1}]".format(define['name'], define['value']))

  #typedef
  iterater = re.finditer(r"[\n^]\s*typedef\s+(?P<value>[ \w\t]+[ \t\*])(?P<name>[a-zA-Z]\w*)([ \t]*\[[ \t]*(?P<length>\d+)[ \t]*\])?\s*;", sourcecode)
  for i in iterater:
    typedef = i.groupdict()
    # if struct['length']:
    #   print("typedef {1} {0}[{2}]".format(typedef['name'], typedef['value'].strip(), typedef['length']))
    # else:
    #   print("typedef {1} {0}".format(typedef['name'], typedef['value'].strip()))
    ret[typedef['name']] = dict(type='typedef', value=typedef['value'].strip(), length=typedef['length'])

  # enum
  iterater = re.finditer(r"[\n^]\s*enum\s+(?P<name>[a-zA-Z]\w*)\s*\{(?P<body>[^\}]*)\}", sourcecode)
  for i in iterater:
    enum = i.groupdict()
    ret[enum['name']] = dict(type='enum', value=enummember(enum['body']))

  # struct
  iterater = re.finditer(r"[\n^]\s*struct\s+(?P<name>[a-zA-Z]\w*)\s*\{(?P<body>[^\}]*)\}", sourcecode)
  for i in iterater:
    struct = i.groupdict()
    ret[struct['name']] = dict(type='struct', value=structmember(struct['body']))

  # class
  keyword = ""
  class_body = ""
  class_state = 0
  block_nest = 0
  block_state = 0
  i = 0
  while i < len(sourcecode):
    char = sourcecode[i]
    if not class_state:
      if char in ["\r", "\n", "\t", " "]:
        if keyword == 'class':
          class_state = 1
        keyword = ""
      else:
        keyword += char
    if class_state:
      class_body += char
      if char == '{':
        block_nest += 1
        block_state = 1
      if char == '}':
        block_nest -= 1
        if block_state and block_nest == 0:
          classes = classparser(ret, 'class' + class_body)
          ret[classes['name']] = classes
          block_state = 0
          class_state = 0
          class_body = ""
    i += 1
  return ret

def funchar(objectid, memberid, typeid, length):
  if length:
    # _inp = 'es'
    _inp = 'y#'
    # _out = 'N'
    #_out = 'y#'
    _out = 'y'
    # _var = 'PyCTP_PyUnicode_DecodeGB2312('+objectid+'->'+memberid+')'
    _var = objectid+'->'+memberid
    _dec = 'const char *'+objectid+'_'+memberid+ ' = NULL;\n\tPy_ssize_t '+objectid+'_'+memberid+ '_len = 0;\n'
    # _ref = ', \"gb2312\", &'+objectid+'_'+memberid
    _ref = ', &'+objectid+'_'+memberid + ', &'+objectid+'_'+memberid+ '_len'
    # _set = 'if(' + objectid+'_'+memberid + ' != nullptr){ strcpy_s('+objectid+'->'+memberid + ', ' + objectid+'_'+memberid + '); PyMem_Free(' + objectid+'_'+memberid + '); ' + objectid+'_'+memberid + ' = nullptr; }'
    # _set = 'if(' + objectid+'_'+memberid + ' != nullptr){ strcpy_s('+objectid+'->'+memberid + ', ' + objectid+'_'+memberid + '); ' + objectid+'_'+memberid + ' = nullptr; }'
    
    _set = 'if(' + objectid+'_'+memberid + ' != NULL) {\n'
    _set += '\t\tif(' + objectid+'_'+memberid + '_len > (Py_ssize_t)sizeof(self->data.'+memberid + ')) {\n'
    _set += '\t\t\tPyErr_Format(PyExc_ValueError, "'+memberid + ' too long: length=%zd (max allowed is %zd)", ' + objectid+'_'+memberid + '_len, (Py_ssize_t)sizeof(self->data.'+memberid+'));\n'
    _set += '\t\t\treturn -1;\n\t\t}\n'
    #_set += '\t\tmemset(self->data.' + memberid + ', 0, sizeof(self->data.' + memberid + '));\n'
    #_set += '\t\tmemcpy(self->data.' + memberid + ', ' + objectid + '_' + memberid + ', ' + objectid+'_'+memberid + '_len);\n'
    _set += '\t\tstrncpy(self->data.' + memberid + ', ' + objectid + '_' + memberid + ', sizeof(self->data.' + memberid + ') );\n'
    _set += '\t\t' + objectid + '_' + memberid + ' = NULL;\n\t}\n'
    
    #_out_var = 'self->data.' + memberid + ', (Py_ssize_t)sizeof(self->data.' + memberid + ')'
    _out_var = 'self->data.' + memberid + ' '
    #_get_body = '\treturn PyBytes_FromStringAndSize(self->data.'+memberid+', (Py_ssize_t)sizeof(self->data.'+memberid+'));\n'
    _get_body = '\treturn PyBytes_FromString(self->data.'+memberid+');\n'
    _set_body = '\tif (!PyBytes_Check(val)) {\n'
    _set_body += '\t\tPyErr_SetString(PyExc_TypeError, "'+memberid+' Expected bytes");\n';
    _set_body += '\t\treturn -1;\n'
    _set_body += '\t}\n'
    _set_body += '\tconst char *buf = PyBytes_AsString(val);\n';
    _set_body += '\tPy_ssize_t len = PyBytes_Size(val);\n'
    _set_body += '\tif (len > (Py_ssize_t)sizeof(self->data.'+memberid+')) {\n'
    _set_body += '\t\tPyErr_SetString(PyExc_ValueError, "'+memberid+' must be less than '+str(length)+' bytes");\n'
    _set_body += '\t\treturn -1;\n'
    _set_body += '\t}\n'
    #_set_body += '\tmemset(self->data.'+memberid+', 0, sizeof(self->data.'+memberid+'));\n'
    #_set_body += '\tmemcpy(self->data.'+memberid+', buf, len);\n'
    _set_body += '\tstrncpy(self->data.'+memberid+', buf, sizeof(self->data.'+memberid+'));\n'
    _set_body += '\treturn 0;\n'
  else:
    _inp = 'c'
    _out = 'c'
    _var = objectid+'->'+memberid
    _dec = 'char '+objectid+'_'+memberid+ ' = 0;\n'
    _ref = ', &'+objectid+'_'+memberid
    _set = 'self->data.' + memberid + ' = ' + objectid+'_'+memberid + ';\n'
    _out_var = 'self->data.' + memberid
    _get_body = '\treturn PyBytes_FromStringAndSize(&(self->data.'+memberid+'), 1);\n'
    
    _set_body = '\tif (!PyBytes_Check(val)) {\n'
    _set_body += '\t\tPyErr_SetString(PyExc_TypeError, "'+memberid+' Expected bytes");\n';
    _set_body += '\t\treturn -1;\n'
    _set_body += '\t}\n'
    _set_body += '\tconst char *buf = PyBytes_AsString(val);\n';
    _set_body += '\tPy_ssize_t len = PyBytes_Size(val);\n'
    _set_body += '\tif (len > (Py_ssize_t)sizeof(self->data.'+memberid+')) {\n'
    _set_body += '\t\tPyErr_SetString(PyExc_ValueError, "'+memberid+' must be less than 1 bytes");\n'
    _set_body += '\t\treturn -1;\n'
    _set_body += '\t}\n'
    _set_body += '\tself->data.'+memberid+' = *buf;\n'
    _set_body += '\treturn 0;\n'
  return dict(out=_out, inp=_inp, var = _var, dec=_dec, ref=_ref, sett = _set, out_var = _out_var, get_body=_get_body, set_body=_set_body)

def fundouble(objectid, memberid, typeid, length):
  _set_body = '    if (!PyFloat_Check(val)) {\n'
  _set_body += '        PyErr_SetString(PyExc_TypeError, "'+memberid+' Expected float");\n'
  _set_body += '        return -1;\n'
  _set_body += '    }\n'
  _set_body += '    const double buf = PyFloat_AsDouble(val);\n'
  _set_body += '    if (buf == -1 && PyErr_Occurred()) {\n'
  _set_body += '        return -1;\n'
  _set_body += '    }\n'
  _set_body += '    self->data.'+memberid+' = buf;\n'
  _set_body += '    return 0;\n'
  return dict(out='d', inp='d', var=objectid+'->'+memberid,
              dec='double '+objectid+'_'+memberid+' = 0.0;\n',
              ref=', &'+objectid+'_'+memberid,
              get_body='\treturn PyFloat_FromDouble(self->data.'+memberid+');\n',
              set_body = _set_body,
              sett = 'self->data.' + memberid + ' = ' + objectid+'_'+memberid + ';', out_var = 'self->data.' + memberid)

def funint(objectid, memberid, typeid, length):
  _get_body = '#if PY_MAJOR_VERSION >= 3 \n'
  _get_body += '\treturn PyLong_FromLong(self->data.'+memberid+');\n'
  _get_body += '#else \n'
  _get_body += '\treturn PyInt_FromLong(self->data.'+memberid+');\n'
  _get_body += '#endif \n'
  
  _set_body = '#if PY_MAJOR_VERSION >= 3\n'
  _set_body += '    if (!PyLong_Check(val)) {\n'
  _set_body += '        PyErr_SetString(PyExc_TypeError, "'+memberid+' Expected long");\n'
  _set_body += '#else \n'
  _set_body += '    if (!PyInt_Check(val)) { \n'
  _set_body += '        PyErr_SetString(PyExc_TypeError, "'+memberid+' Expected int"); \n'
  _set_body += '#endif \n'
  _set_body += '        return -1;\n'
  _set_body += '    }\n'
  _set_body += '#if PY_MAJOR_VERSION >= 3 \n'
  _set_body += '    const long buf = PyLong_AsLong(val); \n'
  _set_body += '#else \n'
  _set_body += '    const long buf = PyInt_AsLong(val); \n'
  _set_body += '#endif \n'
  _set_body += '    if (buf == -1 && PyErr_Occurred()) { \n'
  _set_body += '        return -1; \n'
  _set_body += '    } \n'
  _set_body += '    if (buf < INT_MIN || buf > INT_MAX) { \n'
  _set_body += '        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); \n'
  _set_body += '        return -1; \n'
  _set_body += '    } \n'
  _set_body += '    self->data.'+memberid+' = (int)buf; \n'
  _set_body += '    return 0; \n'
  return dict(out='i', inp='i', var=objectid+'->'+memberid,
              dec='int '+objectid+'_'+memberid+' = 0;\n',
              ref=', &'+objectid+'_'+memberid,
              get_body=_get_body,
              set_body = _set_body,
              sett = 'self->data.' + memberid + ' = ' + objectid+'_'+memberid + ';\n', out_var = 'self->data.' + memberid)

def funshort(objectid, memberid, typeid, length):
  _get_body = '#if PY_MAJOR_VERSION >= 3 \n'
  _get_body += '\treturn PyLong_FromLong(self->data.'+memberid + ');\n'
  _get_body += '#else \n'
  _get_body += '\treturn PyInt_FromLong(self->data.'+memberid + ');\n'
  _get_body += '#endif \n'
  
  _set_body = '#if PY_MAJOR_VERSION >= 3\n'
  _set_body += '    if (!PyLong_Check(val)) {\n'
  _set_body += '        PyErr_SetString(PyExc_TypeError, "'+memberid+' Expected short");\n'
  _set_body += '#else \n'
  _set_body += '    if (!PyInt_Check(val)) { \n'
  _set_body += '        PyErr_SetString(PyExc_TypeError, "'+memberid+' Expected short"); \n'
  _set_body += '#endif \n'
  _set_body += '        return -1;\n'
  _set_body += '    }\n'
  _set_body += '#if PY_MAJOR_VERSION >= 3 \n'
  _set_body += '    const long buf = PyLong_AsLong(val); \n'
  _set_body += '#else \n'
  _set_body += '    const long buf = PyInt_AsLong(val); \n'
  _set_body += '#endif \n'
  _set_body += '    if (buf == -1 && PyErr_Occurred()) { \n'
  _set_body += '        return -1; \n'
  _set_body += '    } \n'
  _set_body += '    if (buf < SHRT_MIN || buf > SHRT_MAX) { \n'
  _set_body += '        PyErr_SetString(PyExc_OverflowError, "the value out of range for C short"); \n'
  _set_body += '        return -1; \n'
  _set_body += '    } \n'
  _set_body += '    self->data.'+memberid+' = (short)buf; \n'
  _set_body += '    return 0; \n'
  return dict(out='h',inp='h', var=objectid+'->'+memberid,
              dec='short '+objectid+'_'+memberid+' = 0;\n',
              ref=', &'+objectid+'_'+memberid,
              get_body=_get_body,
              set_body = _set_body,
              sett = 'self->data.' + memberid + ' = ' + objectid+'_'+memberid + ';\n', out_var = 'self->data.' + memberid)

def generatestructcppheadercode(codetree):
  """struct header"""
  import re, chardet
  cppheadercodetemplate = './src/UserApiStruct.h.template'
  with open(cppheadercodetemplate, 'rb') as f:
    data = f.read()
    encoding = chardet.detect(data)
    templatecode = data.decode(encoding['encoding'])
  typeList = []
  for (key, value) in codetree.items():
    if(value['type'] == 'struct'):
      sourcecode = templatecode
      sourcecode = re.sub(r'\$\{\s*comment\s*\}', '', sourcecode)
      sourcecode = re.sub(r'\$\{\s*struct_name\s*\}', key, sourcecode)
      sourcecode = re.sub(r'\$\{\s*STRUCT_NAME\s*\}', key.upper(), sourcecode)
      cppheadercodefile = "./src/UserApiStruct/Py{StructName}.h".format(StructName=key)
      with open(cppheadercodefile, 'wt') as f:
        f.write(sourcecode)
      typeList.append(key)
  headerlist = ''
  initfunlist = ''
  for key in typeList:
    headerlist += '#include "UserApiStruct/Py'+key+'.h"\n'
    initfunlist += '\tif( Py'+key+'Type_init(module) < 0 ) return -1;\n'
  cppheadercodetemplate = './src/UserApiStruct.h_all.template'
  with open(cppheadercodetemplate, 'rb') as f:
    data = f.read()
    encoding = chardet.detect(data)
    templatecode = data.decode(encoding['encoding'])
  sourcecode = templatecode
  sourcecode = re.sub(r'\$\{\s*cppheadercode\s*\}', headerlist, sourcecode)
  sourcecode = re.sub(r'\$\{\s*cppsourcecode\s*\}', initfunlist, sourcecode)
  with open('./src/UserApiStruct.h', 'wt') as f:
    f.write(sourcecode)
  cppheadercodetemplate = './src/UserApiStruct.cpp_all.template'
  with open(cppheadercodetemplate, 'rb') as f:
    data = f.read()
    encoding = chardet.detect(data)
    templatecode = data.decode(encoding['encoding'])
  sourcecode = templatecode
  sourcecode = re.sub(r'\$\{\s*cppheadercode\s*\}', headerlist, sourcecode)
  sourcecode = re.sub(r'\$\{\s*cppsourcecode\s*\}', initfunlist, sourcecode)
  with open('./src/UserApiStruct.cpp', 'wt') as f:
    f.write(sourcecode)

def generatestructcppsourcecode(codetree):
  """struct source"""
  import re, chardet
  cppsourcecodetemplate = "./src/UserApiStruct.cpp.template"
  with open(cppsourcecodetemplate, 'rb') as f:
    data = f.read()
    encoding = chardet.detect(data)
    templatecode = data.decode(encoding['encoding'])
  for (key,value) in codetree.items():
    if(value['type'] == 'struct'):
      # analysis struct members
      outformat = ""
      outvarlist = ""
      keywordslist = ""
      keywordss = ""
      declaration = ""
      refcode = ""
      setcode = ""
      getfunbody = ''
      setfunbody = ''
      getsetlist = ''
      for member in value['value']:
        member_name = member['name']
        member_type = codetree.get( member['type'] )
        type_name = member_type['value']
        type_len = member_type['length']
        ret = typefun.get(type_name)("p"+key.replace("CThostFtdc", ""), member_name, type_name, type_len)
        outformat += ",s:" + ret['out']
        outvarlist += "\t\t, \""+member_name+"\", " + ret['out_var'] + "\n"
        keywordslist += '"' + member_name + '", '
        keywordss += ret['inp']
        
        declaration += '\t//' + member['type'] + ' ' + type_name + ('['+ str(type_len) +']' if type_len else '') +'\n'
        declaration += '\t'+ret['dec'] + '\n'
        refcode += '\t\t'+ret['ref']+'\n'
        
        setcode += '\t//' + member['type'] + ' ' + type_name + ('['+ str(type_len) +']' if type_len else '') +'\n'
        setcode += '\t'+ret['sett']+'\n'
        
        getfunbody += 'static PyObject *Py' + key + '_get_' + member_name + '(Py' + key + ' *self, void *closure) {\n'
        getfunbody += ret['get_body']
        getfunbody += '}\n\n'
        
        setfunbody += 'static int Py' + key + '_set_' + member_name + '(Py' + key + '* self, PyObject* val, void *closure) {\n'
        setfunbody += ret['set_body']
        setfunbody += '}\n\n'
        
        getsetlist += '\t {(char *)"' + member_name + '", (getter)Py' + key + '_get_' + member_name + ', (setter)Py' + key + '_set_' + member_name + ', (char *)"' + member_name + '", NULL},\n'
        
      sourcecode = templatecode
      sourcecode = re.sub(r'\$\{\s*struct_comment\s*\}', '', sourcecode)
      sourcecode = re.sub(r'\$\{\s*struct_name\s*\}', key, sourcecode)
      sourcecode = re.sub(r'\$\{\s*cpp_code_keywordslist\s*\}', keywordslist, sourcecode)
      sourcecode = re.sub(r'\$\{\s*cpp_code_declaration\s*\}', declaration, sourcecode)
      sourcecode = re.sub(r'\$\{\s*cpp_code_keywordss\s*\}', keywordss, sourcecode)
      sourcecode = re.sub(r'\$\{\s*cpp_code_keywordss_py2\s*\}', keywordss.replace('y#', 's#'), sourcecode)
      sourcecode = re.sub(r'\$\{\s*cpp_code_refcode\s*\}', refcode, sourcecode)
      sourcecode = re.sub(r'\$\{\s*cpp_code_setcode\s*\}', setcode, sourcecode)
      outformat = outformat.lstrip(',')
      sourcecode = re.sub(r'\$\{\s*cpp_code_outformat\s*\}', outformat, sourcecode)
      #sourcecode = re.sub(r'\$\{\s*cpp_code_outformat_py2\s*\}', outformat.replace('y#', 's#'), sourcecode)
      sourcecode = re.sub(r'\$\{\s*cpp_code_outformat_py2\s*\}', outformat.replace('y', 's'), sourcecode)
      sourcecode = re.sub(r'\$\{\s*cpp_code_outvarlist\s*\}', outvarlist, sourcecode)
      # sourcecode = re.sub(r'\{\{\s*getfunbody\s*\}\}', getfunbody, sourcecode)
      # sourcecode = re.sub(r'\{\{\s*setfunbody\s*\}\}', setfunbody, sourcecode)
      sourcecode = re.sub(r'\$\{\s*cpp_code_methodbody\s*\}', getfunbody + setfunbody, sourcecode)
      sourcecode = re.sub(r'\$\{\s*cpp_code_getsetlist\s*\}', getsetlist, sourcecode)
      
      
      cppsourcecodefile = "./src/UserApiStruct/Py{StructName}.cpp".format(StructName=key)
      with open(cppsourcecodefile, 'wt') as f:
        f.write(sourcecode)
 
def generatemacrocode(codetree):
  template = "./src/UserApiDataType.cpp.template"
  file = "./src/UserApiDataType.cpp"
  cppsourcecode = ""
  for (key,value) in codetree.items():
    if(value['type'] == 'enum'):
      for item in value['value']:
        cppsourcecode += "\tif( PyModule_AddIntMacro(m, "+item['name']+") < 0 ) return -1;\n"
    if(value['type'] == '#define'):
      if value['value']:
        if len(value['value'].strip("'"))==1:
          cppsourcecode += "\tif( PyModule_AddCharMacro(m, "+key+") < 0 ) return -1;\n"
        else:
          cppsourcecode += "\tif( PyModule_AddStrConstant(m, \""+key+"\", \""+value['value'].strip("'")+"\") < 0 ) return -1;\n"
          
  import re, chardet
  
  with open(template, 'rb') as f:
    data = f.read()
    
  encoding = chardet.detect(data)
  sourcecode = data.decode(encoding['encoding'])
  sourcecode = re.sub(r'\$\{\s*body\s*\}', cppsourcecode, sourcecode)

  with open(file, 'wt') as f:
    f.write(sourcecode)
    
def generatemdapicode(codetree):
  import re, chardet
  # mdapi spi
  mdapispibody = ''
  for (key, value) in codetree.items():
    if value['type']=='class' and key == 'CThostFtdcMdSpi':
      for method in value['methods']:
        assert( method['type'] == 'void' )
        mdapispibody += ('\t' * 3) + 'virtual '+method['type']+' '+method['name']+'('+', '.join([ param['type'] + ' ' + param['name'] + (' = ' + method['default'] if param['default'] != None else '') for param in method['param']])+') { \n'
        mdapispibody += ('\t' * 4) + 'PyGILState_STATE gstate = PyGILState_Ensure(); \n'
        for param in method['param']:
          if param['type'] in ['int', 'bool']:
            mdapispibody += ('\t' * 4) + 'PyObject *Py' + re.sub(r'^\*', '', param['name']) + ' = NULL; \n'
          else:
            mdapispibody += ('\t' * 4) + 'Py' + param['type'] + ' *Py' + re.sub(r'^\*', '', param['name']) + ' = NULL; \n'
            mdapispibody += ('\t' * 4) + 'PyObject *Py' + re.sub(r'^\*', '', param['name']) + '_callarg = NULL; \n'
        mdapispibody += ('\t' * 4) + 'PyObject *result = NULL;\n'
        mdapispibody += '\n'
        for param in method['param']:
          if param['type'] == 'int':
            mdapispibody += ('\t' * 4) + 'Py'+param['name']+' = PyLong_FromLong('+param['name']+');\n'
            mdapispibody += ('\t' * 4) + 'if(!Py'+param['name']+') goto cleanup;\n'
          elif param['type'] == 'bool':
            mdapispibody += ('\t' * 4) + 'Py'+param['name']+' = PyBool_FromLong('+param['name']+');\n'
            mdapispibody += ('\t' * 4) + 'if (!Py'+param['name']+') goto cleanup;\n'
          else:
            mdapispibody += ('\t' * 4) + 'Py' + re.sub(r'^\*', '', param['name']) + ' = PyObject_New(Py'+param['type']+', &Py'+param['type']+'Type);\n'
            mdapispibody += ('\t' * 4) + 'if (!Py' + re.sub(r'^\*', '', param['name']) + ') goto cleanup;\n'
            mdapispibody += ('\t' * 4) + 'Py' + re.sub(r'^\*', '', param['name']) + '_callarg = (PyObject *)Py' + re.sub(r'^\*', '', param['name']) + ';\n'
            mdapispibody += ('\t' * 4) + 'if (' + re.sub(r'^\*', '', param['name']) + ') { Py' + re.sub(r'^\*', '', param['name']) + '->data = '+param['name']+'; } else { Py'+re.sub(r'^\*', '', param['name'])+'_callarg = Py_None; } \n'
          mdapispibody += '\n'
        mdapispibody += '\n'
        if method['param']:
          mdapispibody += ('\t' * 4) + '//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("'+ ('O' * len(method['param'])) +'"), '+(', '.join( [ 'Py'+re.sub(r'^\*', '', param['name']) if param['type'] in ['int', 'bool'] else 'Py'+re.sub(r'^\*', '', param['name']) + '_callarg' for param in method['param']] ))+');\n'
          mdapispibody += ('\t' * 4) + 'result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("'+method['name']+'"), const_cast<char *>("'+ ('O' * len(method['param'])) +'"), '+(', '.join( [ 'Py'+re.sub(r'^\*', '', param['name']) if param['type'] in ['int', 'bool'] else 'Py'+re.sub(r'^\*', '', param['name']) + '_callarg' for param in method['param']] ))+');\n'
        else:
          mdapispibody += ('\t' * 4) + '//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), NULL);\n'
          mdapispibody += ('\t' * 4) + 'result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("'+method['name']+'"), NULL);\n'
        mdapispibody += ('\t' * 4) + 'if(!result) PyErr_Print();\n'
        mdapispibody += '\n'
        if method['param']:
          mdapispibody += ('\t' * 4) + 'cleanup:\n'
        for param in method['param']:
          mdapispibody += ('\t' * 5) + 'Py_XDECREF(Py' + re.sub(r'^\*', '', param['name']) + ');\n'
        mdapispibody += ('\t' * 5) + 'Py_XDECREF(result);\n'
        mdapispibody += ('\t' * 5) + 'PyGILState_Release(gstate);\n'
        mdapispibody += ('\t' * 3) + '}\n\n'
  mdapiapibody = ''
  for (key, value) in codetree.items():
    if value['type']=='class' and key == 'CThostFtdcMdApi':
      for method in value['methods']:
        if method['name'] not in ['*CreateFtdcMdApi', '*GetApiVersion', 'RegisterSpi', 'Release', '~CThostFtdcMdApi']:
          if method['type'] == 'void':
            if method['param']:
              if len(method['param'])==1:
                if method['param'][0]['type'] == 'char' and method['param'][0]['name'].startswith('*'):
                  mdapiapibody += 'PyCTP_MD_FUNCTION_MAGIC_VOID_STRING(' + method['name'] + ');\n'
                else:
                  mdapiapibody += 'PyCTP_MD_FUNCTION_MAGIC_VOID_STRUCT(' + method['name'] + ', ' + method['param'][0]['type'] + ');\n'
              else:
                raise ValueError(method)
            else:
              mdapiapibody += 'PyCTP_MD_FUNCTION_MAGIC(' + method['name'] + ');\n'
          elif method['type'] == 'int':
            if len(method['param'])==0:
              mdapiapibody += 'PyCTP_MD_FUNCTION_MAGIC_INT(' + method['name'] + ');\n'
            elif len(method['param'])==1:
              raise ValueError(method)
            elif len(method['param'])==2:
              if method['param'][0]['type'] == 'char' and method['param'][0]['name'].startswith('*') and method['param'][1]['type'] == 'int':
                mdapiapibody += 'PyCTP_MD_FUNCTION_MAGIC_INT_SUBSCRIBE(' + method['name'] + ') \n'
              else:
                if method['param'][0]['type'].startswith('CThostFtdc') and method['param'][0]['name'].startswith('*') and method['param'][1]['type'] == 'int':
                  mdapiapibody += 'PyCTP_MD_FUNCTION_MAGIC_INT_STRUCT_INT('+method['name']+', '+method['param'][0]['type']+') \n'
                else:
                  raise ValueError(method)
            else:
              raise ValueError(method)
          elif method['type'] == 'char':
            if method['param']:
              raise ValueError(method)
            else:
              if method['name'].startswith('*'):
                mdapiapibody += 'PyCTP_MD_FUNCTION_MAGIC_STRING(' + method['name'][1:] + ');\n'
              else:
                raise ValueError(method)
          else:
            raise ValueError(method)
  mdapiapilist = ''
  for (key, value) in codetree.items():
    if value['type']=='class' and key == 'CThostFtdcMdApi':
      for method in value['methods']:
        if method['name'] not in ['*CreateFtdcMdApi', '*GetApiVersion', '~CThostFtdcMdApi']:
          mdapiapilist += '\t{"'+re.sub(r'^\*', '', method['name'])+'", CTP_THOST_FTDC_MD_API_'+re.sub(r'^\*', '', method['name'])+', '+('METH_VARARGS' if method['param'] else 'METH_NOARGS')+', nullptr},\n'
  with open('./src/MdApi.cpp.template', 'rb') as f:
    data = f.read()  
  encoding = chardet.detect(data)
  sourcecode = data.decode(encoding['encoding'])
  
  sourcecode = re.sub(r'\$\{\s*spibody\s*\}', mdapispibody, sourcecode)
  sourcecode = re.sub(r'\$\{\s*apibody\s*\}', mdapiapibody, sourcecode)
  sourcecode = re.sub(r'\$\{\s*apilist\s*\}', mdapiapilist, sourcecode)
  
  with open('./src/MdApi.cpp', 'wt') as f:
    f.write(sourcecode)

def generatetraderapicode(codetree):
  import re, chardet
  # traderapi spi
  traderapispibody = ''
  for (key, value) in codetree.items():
    if value['type']=='class' and key == 'CThostFtdcTraderSpi':
      for method in value['methods']:
        assert( method['type'] == 'void' )
        traderapispibody += ('\t' * 3) + 'virtual '+method['type']+' '+method['name']+'('+', '.join([ param['type'] + ' ' + param['name'] + (' = ' + method['default'] if param['default'] != None else '') for param in method['param']])+') { \n'
        traderapispibody += ('\t' * 4) + 'PyGILState_STATE gstate = PyGILState_Ensure();\n'
        for param in method['param']:
          if param['type'] in ['int', 'bool']:
            traderapispibody += ('\t' * 4) + 'PyObject *Py' + re.sub(r'^\*', '', param['name']) + ' = NULL; \n'
          else:
            traderapispibody += ('\t' * 4) + 'Py' + param['type'] + ' *Py' + re.sub(r'^\*', '', param['name']) + ' = NULL; \n'
            traderapispibody += ('\t' * 4) + 'PyObject *Py' + re.sub(r'^\*', '', param['name']) + '_callarg = NULL; \n'
        traderapispibody += ('\t' * 4) + 'PyObject *result = NULL;\n'
        traderapispibody += '\n'
        for param in method['param']:
          if param['type'] == 'int':
            traderapispibody += ('\t' * 4) + 'Py'+param['name']+' = PyLong_FromLong('+param['name']+');\n'
            traderapispibody += ('\t' * 4) + 'if(!Py'+param['name']+') goto cleanup;\n'
          elif param['type'] == 'bool':
            traderapispibody += ('\t' * 4) + 'Py'+param['name']+' = PyBool_FromLong('+param['name']+');\n'
            traderapispibody += ('\t' * 4) + 'if (!Py'+param['name']+') goto cleanup;\n'
          else:
            traderapispibody += ('\t' * 4) + 'Py' + re.sub(r'^\*', '', param['name']) + ' = PyObject_New(Py'+param['type']+', &Py'+param['type']+'Type);\n'
            traderapispibody += ('\t' * 4) + 'if (!Py' + re.sub(r'^\*', '', param['name']) + ') goto cleanup;\n'
            traderapispibody += ('\t' * 4) + 'Py' + re.sub(r'^\*', '', param['name']) + '_callarg = (PyObject *)Py' + re.sub(r'^\*', '', param['name']) + ';\n'
            traderapispibody += ('\t' * 4) + 'if (' + re.sub(r'^\*', '', param['name']) + ') { Py' + re.sub(r'^\*', '', param['name']) + '->data = '+param['name']+'; } else { Py'+re.sub(r'^\*', '', param['name'])+'_callarg = Py_None; } \n'
          traderapispibody += '\n'
        traderapispibody += '\n'
        if method['param']:
          traderapispibody += ('\t' * 4) + '//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), const_cast<char *>("'+ ('O' * len(method['param'])) +'"), '+(', '.join( [ 'Py'+re.sub(r'^\*', '', param['name']) if param['type'] in ['int', 'bool'] else 'Py'+re.sub(r'^\*', '', param['name']) + '_callarg' for param in method['param']] ))+');\n'
          traderapispibody += ('\t' * 4) + 'result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("'+method['name']+'"), const_cast<char *>("'+ ('O' * len(method['param'])) +'"), '+(', '.join( [ 'Py'+re.sub(r'^\*', '', param['name']) if param['type'] in ['int', 'bool'] else 'Py'+re.sub(r'^\*', '', param['name']) + '_callarg' for param in method['param']] ))+');\n'
        else:
          traderapispibody += ('\t' * 4) + '//PyObject *result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>(__FUNCTION__), NULL);\n'
          traderapispibody += ('\t' * 4) + 'result = PyObject_CallMethod(this->api->pySpi, const_cast<char *>("'+method['name']+'"), NULL);\n'
        traderapispibody += ('\t' * 4) + 'if(!result) PyErr_Print();\n'
        traderapispibody += '\n'
        if method['param']:
          traderapispibody += ('\t' * 4) + 'cleanup:\n'
        for param in method['param']:
          traderapispibody += ('\t' * 5) + 'Py_XDECREF(Py' + re.sub(r'^\*', '', param['name']) + ');\n'
        traderapispibody += ('\t' * 5) + 'Py_XDECREF(result);\n'
        traderapispibody += ('\t' * 5) + 'PyGILState_Release(gstate);\n'
        traderapispibody += ('\t' * 3) + '}\n\n'
  traderapiapibody = ''
  for (key, value) in codetree.items():
    if value['type']=='class' and key == 'CThostFtdcTraderApi':
      for method in value['methods']:
        if method['name'] not in ['*CreateFtdcTraderApi', '*GetApiVersion', 'RegisterSpi', 'Release', '~CThostFtdcTraderApi', 'SubscribePrivateTopic', 'SubscribePublicTopic']:
          if method['type'] == 'void':
            if method['param']:
              if len(method['param'])==1:
                if method['param'][0]['type'] == 'char' and method['param'][0]['name'].startswith('*'):
                  traderapiapibody += 'PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRING(' + method['name'] + ');\n'
                else:
                  traderapiapibody += 'PyCTP_TRADER_FUNCTION_MAGIC_VOID_STRUCT(' + method['name'] + ', ' + method['param'][0]['type'].rstrip('*') + ');\n'
              else:
                raise ValueError(method)
            else:
              traderapiapibody += 'PyCTP_TRADER_FUNCTION_MAGIC(' + method['name'] + ');\n'
          elif method['type'] == 'int':
            if len(method['param'])==0:
              traderapiapibody += 'PyCTP_TRADER_FUNCTION_MAGIC_INT(' + method['name'] + ');\n'
            elif len(method['param'])==1:
              if method['param'][0]['type'].startswith('CThostFtdc') and method['param'][0]['name'].startswith('*'):
                traderapiapibody += 'PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT('+method['name']+', '+method['param'][0]['type']+') \n'
              else:
                raise ValueError(method)
            elif len(method['param'])==2:
              if method['param'][0]['type'] == 'char' and method['param'][0]['name'].startswith('*') and method['param'][1]['type'] == 'int':
                traderapiapibody += 'PyCTP_TRADER_FUNCTION_MAGIC_INT_SUBSCRIBE(' + method['name'] + ') \n'
              else:
                if method['param'][0]['type'].startswith('CThostFtdc') and method['param'][0]['name'].startswith('*') and method['param'][1]['type'] == 'int':
                  traderapiapibody += 'PyCTP_TRADER_FUNCTION_MAGIC_INT_STRUCT_INT('+method['name']+', '+method['param'][0]['type']+') \n'
                else:
                  raise ValueError(method)
            else:
              raise ValueError(method)
          elif method['type'] == 'char':
            if method['param']:
              raise ValueError(method)
            else:
              if method['name'].startswith('*'):
                traderapiapibody += 'PyCTP_TRADER_FUNCTION_MAGIC_STRING(' + method['name'][1:] + ');\n'
              else:
                raise ValueError(method)
          else:
            raise ValueError(method)
  traderapiapilist = ''
  for (key, value) in codetree.items():
    if value['type']=='class' and key == 'CThostFtdcTraderApi':
      for method in value['methods']:
        if method['name'] not in ['*CreateFtdcTraderApi', '*GetApiVersion', '~CThostFtdcTraderApi']:
          traderapiapilist += '\t{"'+re.sub(r'^\*', '', method['name'])+'", CTP_THOST_FTDC_TRADER_API_'+re.sub(r'^\*', '', method['name'])+', '+('METH_VARARGS' if method['param'] else 'METH_NOARGS')+', nullptr},\n'
  with open('./src/TraderApi.cpp.template', 'rb') as f:
    data = f.read()  
    encoding = chardet.detect(data)
    sourcecode = data.decode(encoding['encoding'])
    sourcecode = re.sub(r'\$\{\s*spibody\s*\}', traderapispibody, sourcecode)
    sourcecode = re.sub(r'\$\{\s*apibody\s*\}', traderapiapibody, sourcecode)
    sourcecode = re.sub(r'\$\{\s*apilist\s*\}', traderapiapilist, sourcecode)
    with open('./src/TraderApi.cpp', 'wt') as f:
      f.write(sourcecode)
  
import os
ctpdir = './ctp/v6.7.9_P1_20250319/api/v6.7.9_P1_20250319_traderapi/v6.7.9_P1_20250319_traderapi/v6.7.9_P1_20250319_api_traderapi_linux64/v6.7.9_P1_20250319_api/v6.7.9_P1_20250319_api_traderapi_se_linux64'
#ctpdir = './v6.6.9_20220914_95719.2466/v6.6.9_20220914_api/v6.6.9_20220914_20220914_api_tradeapi_se_linux64'
#ctpdir = './ctp/v6.6.2_P11_SM_20221103/api/v6.6.2_P11_SM_tradeapi/v6.6.2_P11_SM_20221025_api/v6.6.2_P11_SM_20221025_api_tradeapi_sm_linux64'
#ctpdir = './ctp/v6.7.0_CP_20230303/api/v6.7.0_CP_traderapi_20230303/v6.7.0_CP_20230303_api/v6.7.0_CP_20230303_api_tradeapi_se_linux64'
# ctpdir = './ctp/v6.7.9_20241224/api/v6.7.9_traderapi_20241224/v6.7.9_20241224_traderapi/v6.7.9_20241224_api_traderapi_linux64/v6.7.9_20241224_api/v6.7.9_20241224_api_traderapi_se_linux64'
codetree = {}
codetree.update(structure(os.path.join(ctpdir, 'ThostFtdcUserApiDataType.h')))
codetree.update(structure(os.path.join(ctpdir, 'ThostFtdcUserApiStruct.h')))
codetree.update(structure(os.path.join(ctpdir, 'ThostFtdcMdApi.h')))
codetree.update(structure(os.path.join(ctpdir, 'ThostFtdcTraderApi.h')))

typefun = dict(char=funchar,double=fundouble, int=funint, short=funshort)

# from ./src/UserApiStruct.h.template ./src/UserApiStruct.hpp.template
generatestructcppheadercode(codetree)
# from ./src/UserApiStruct.cpp.template
generatestructcppsourcecode(codetree)
# from ./src/UserApiDataType.cpp.template
generatemacrocode(codetree)
# from ./src/MdApi.cpp.template
generatemdapicode(codetree)
# from ./src/TraderApi.cpp.template
generatetraderapicode(codetree)


