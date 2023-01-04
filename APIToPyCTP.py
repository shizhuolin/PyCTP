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
    _inp = 'y'
    # _out = 'N'
    _out = 'y'
    # _var = 'PyCTP_PyUnicode_DecodeGB2312('+objectid+'->'+memberid+')'
    _var = objectid+'->'+memberid
    _dec = 'char *'+objectid+'_'+memberid+ ' = nullptr;\n'
    # _ref = ', \"gb2312\", &'+objectid+'_'+memberid
    _ref = ', &'+objectid+'_'+memberid
    # _set = 'if(' + objectid+'_'+memberid + ' != nullptr){ strcpy_s('+objectid+'->'+memberid + ', ' + objectid+'_'+memberid + '); PyMem_Free(' + objectid+'_'+memberid + '); ' + objectid+'_'+memberid + ' = nullptr; }'
    _set = 'if(' + objectid+'_'+memberid + ' != nullptr){ strcpy_s('+objectid+'->'+memberid + ', ' + objectid+'_'+memberid + '); ' + objectid+'_'+memberid + ' = nullptr; }'
  else:
    _inp = 'c'
    _out = 'c'
    _var = objectid+'->'+memberid
    _dec = 'char '+objectid+'_'+memberid+ ' = 0;\n'
    _ref = ', &'+objectid+'_'+memberid
    _set = objectid+'->'+memberid + ' = ' + objectid+'_'+memberid + ';'
  return dict(out=_out, inp=_inp, var = _var, dec=_dec, ref=_ref, sett = _set)

def fundouble(objectid, memberid, typeid, length):
  return dict(out='d', inp='d', var=objectid+'->'+memberid,
              dec='double '+objectid+'_'+memberid+' = 0.0;\n',
              ref=', &'+objectid+'_'+memberid,
              sett = objectid+'->'+memberid + ' = ' + objectid+'_'+memberid + ';')

def funint(objectid, memberid, typeid, length):
  return dict(out='i', inp='i', var=objectid+'->'+memberid,
              dec='int '+objectid+'_'+memberid+' = 0;\n',
              ref=', &'+objectid+'_'+memberid,
              sett = objectid+'->'+memberid + ' = ' + objectid+'_'+memberid + ';')

def funshort(objectid, memberid, typeid, length):
  return dict(out='h',inp='h', var=objectid+'->'+memberid,
              dec='short '+objectid+'_'+memberid+' = 0;\n',
              ref=', &'+objectid+'_'+memberid,
              sett = objectid+'->'+memberid + ' = ' + objectid+'_'+memberid + ';')

typefun = dict(char=funchar,double=fundouble, int=funint, short=funshort)

def generatestructcppheadercode(codetree):
  """struct header"""
  cppheadercodetemplate = "./src/UserApiStruct.h.template"
  cppheadercodefile = "./src/UserApiStruct.h"
  cppheadercode = ""
  for (key, value) in codetree.items():
    if(value['type'] == 'struct'):
      cppheadercode += "\nPyObject *PyCTP_PyDict_FromStruct(" + key + " *p"+key.replace("CThostFtdc", "")+");"
      cppheadercode += "\nint PyCTP_Struct_FromPyDict(" + key + " *p" + key.replace("CThostFtdc", "") + ", PyObject *dict);"
  
  import re, chardet
  
  with open(cppheadercodetemplate, 'rb') as f:
    data = f.read()
    
  encoding = chardet.detect(data)
  sourcecode = data.decode(encoding['encoding'])
  sourcecode = re.sub(r'\{\{\s*body\s*\}\}', cppheadercode, sourcecode)
  
  with open(cppheadercodefile, 'wt') as f:
    f.write(sourcecode)

def generatestructcppsourcecode(codetree):
  """struct source"""
  cppsourcecodetemplate = "./src/UserApiStruct.cpp.template"
  cppsourcecodefile = "./src/UserApiStruct.cpp"
  cppsourcecode = ""
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
      for member in value['value']:
        member_name = member['name']
        member_type = codetree.get( member['type'] )
        type_name = member_type['value']
        type_len = member_type['length']
        
        ret = typefun.get(type_name)("p"+key.replace("CThostFtdc", ""), member_name, type_name, type_len)
        outformat += ",s:" + ret['out']
        outvarlist += "\t\t, \""+member_name+"\", " + ret['var'] + "\n"
        keywordslist += "\"" + member_name + "\", "
        keywordss += ret['inp']
        declaration += '\t'+ret['dec']
        refcode += '\t\t'+ret['ref']+'\n'
        setcode += '\t\t'+ret['sett']+'\n'

      cppsourcecode += "\nint PyCTP_Struct_FromPyDict(" + key + " *p" + key.replace("CThostFtdc", "") + ", PyObject *dict)\n"
      cppsourcecode += "{\n"
      cppsourcecode += "\tstatic char *kwlist[] = {"+keywordslist+"nullptr};\n"
      cppsourcecode += declaration
      cppsourcecode += "\tPyCTP_PyDict_FromStruct_BEGIN(p" + key.replace("CThostFtdc", "") + ", \"|"+keywordss+"\")\n";
      cppsourcecode += refcode
      cppsourcecode += "\tPyCTP_PyDict_FromStruct_END\n"
      cppsourcecode += setcode
      cppsourcecode += "\tPyCTP_PyDict_FromStruct_RETURN\n"
      cppsourcecode += "}\n"
      
      outformat = outformat.lstrip(',')
      cppsourcecode += "PyObject *PyCTP_PyDict_FromStruct(" + key + " *p"+key.replace("CThostFtdc", "")+")\n"
      cppsourcecode += "{\n"
      cppsourcecode += "\tif(p"+key.replace("CThostFtdc", "")+" == nullptr) Py_RETURN_NONE;\n"
      cppsourcecode += "\treturn Py_BuildValue(\"{"+outformat+"}\"\n"+outvarlist+"\t\t);\n"
      cppsourcecode += "}\n"
      
  import re, chardet
  
  with open(cppsourcecodetemplate, 'rb') as f:
    data = f.read()
    
  encoding = chardet.detect(data)
  sourcecode = data.decode(encoding['encoding'])
  sourcecode = re.sub(r'\{\{\s*body\s*\}\}', cppsourcecode, sourcecode)
  
  with open(cppsourcecodefile, 'wt') as f:
    f.write(sourcecode)

def generatemacrocode(codetree):
  template = "./src/UserApiDataType.cpp.template"
  file = "./src/UserApiDataType.cpp"
  cppsourcecode = ""
  for (key,value) in codetree.items():
    if(value['type'] == 'enum'):
      for item in value['value']:
        cppsourcecode += "if( PyModule_AddIntMacro(m, "+item['name']+") != 0 ) return -1;\n"
    if(value['type'] == '#define'):
      if value['value']:
        if len(value['value'].strip("'"))==1:
          cppsourcecode += "if( PyModule_AddCharMacro(m, "+key+") != 0 ) return -1;\n"
        else:
          cppsourcecode += "if( PyModule_AddStrConstant(m, \""+key+"\", \""+value['value'].strip("'")+"\") != 0 ) return -1;\n"
          
  import re, chardet
  
  with open(template, 'rb') as f:
    data = f.read()
    
  encoding = chardet.detect(data)
  sourcecode = data.decode(encoding['encoding'])
  sourcecode = re.sub(r'\{\{\s*body\s*\}\}', cppsourcecode, sourcecode)
  
  with open(file, 'wt') as f:
    f.write(sourcecode)

def generateMdApi(codetree):
  header_template = "./src/MdApi.h.template"
  source_template = "./src/MdApi.cpp.template"
  
  for method in codetree['CThostFtdcMdSpi']['methods']:
    print(method)

import os
ctpdir = './v6.6.9_20220914_95719.2466/v6.6.9_20220914_api/v6.6.9_20220914_20220914_api_tradeapi_se_linux64/'
codetree = {}
codetree.update(structure(os.path.join(ctpdir, 'ThostFtdcUserApiDataType.h')))
codetree.update(structure(os.path.join(ctpdir, 'ThostFtdcUserApiStruct.h')))
codetree.update(structure(os.path.join(ctpdir, 'ThostFtdcMdApi.h')))
codetree.update(structure(os.path.join(ctpdir, 'ThostFtdcTraderApi.h')))

#generatestructcppheadercode(codetree)
#generatestructcppsourcecode(codetree)
#generatemacrocode(codetree)

#generateMdApi(codetree)
generateTraderApi(codetree)
