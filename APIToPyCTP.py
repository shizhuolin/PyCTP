#!/usr/bin/python
# -*- coding: UTF-8 -*-

# ctp struct,datatype conversion to pyctp.h,cpp


def structmembertrue(bodycode):
    import re
    ret = {}
    iterater = re.finditer(r"[\n^]\s*(?P<type>[a-zA-Z][ \w]*[\s\*])(?P<name>[a-zA-Z]\w*)([ \t]*\[[ \t]*(?P<length>\d+)[ \t]*\])?\s*;", bodycode)
    for i in iterater:
        d = i.groupdict();
        ret[d['name']] = dict(type=d['type'].strip())
    return ret

def structtrue(filename):
    import io, re
    ret = {}
    file = io.open(filename, encoding='utf-8')
    sourcecode = file.read()
    sourcecode = re.sub(r"//[^\n]*", "", sourcecode)
    sourcecode = re.sub(r"/\*[.\r\n]*\*/", "", sourcecode)

    ##print(sourcecode)

    ## #define
    iterater = re.finditer(r"[\n^]\s*#define\s+(?P<name>[a-zA-Z]\w*(\([^\)]*\))?)([ \t]+(?P<value>.*))?(?!\\)\r?\n", sourcecode)
    for i in iterater:
        struct = i.groupdict()
        ret[struct['name']] = dict(type='#define', value=struct['value'])
        #print("#define [{0}] [{1}]".format(struct['name'], struct['value']))
    
    ## typedef
    iterater = re.finditer(r"[\n^]\s*typedef\s+(?P<value>[ \w\t]+[ \t\*])(?P<name>[a-zA-Z]\w*)([ \t]*\[[ \t]*(?P<length>\d+)[ \t]*\])?\s*;", sourcecode)
    for i in iterater:
        struct = i.groupdict()
##        if struct['length']:
##            print("typedef {1} {0}[{2}]".format(struct['name'], struct['value'].strip(), struct['length']))
##        else:
##            print("typedef {1} {0}".format(struct['name'], struct['value'].strip()))
        ret[struct['name']] = dict(type='typedef', value=struct['value'].strip(), length=struct['length'])

    ## struct
    iterater = re.finditer(r"[\n^]\s*struct\s+(?P<name>[a-zA-Z]\w*)\s*\{(?P<body>[^\}]*)\}", sourcecode)
    for i in iterater:
        struct = i.groupdict()
        ret[struct['name']] = dict(type='struct', value=structmembertrue(struct['body']))
    return ret
    

codetree = {}
codetree.update(structtrue('./v6.3.6_20160606_api_tradeapi_linux64/ThostFtdcUserApiDataType.h'))
codetree.update(structtrue('./v6.3.6_20160606_api_tradeapi_linux64/ThostFtdcUserApiStruct.h'))


#头文件
cppheadercode = ""
for (key,value) in codetree.items():
    if(value['type'] == 'struct'):
        pass
        cppheadercode += "\nPyObject *PyCTP_PyDict_FromStruct(" + key + " *p"+key.replace("CThostFtdc", "")+");"
        cppheadercode += "\nint PyCTP_Struct_FromPyDict(" + key + " *p" + key.replace("CThostFtdc", "") + ", PyObject *dict);"
        
#print(cppheadercode)


#源文件
def funchar(objectid, memberid, typeid, length):
    if length:
#        _inp = 'es'
        _inp = 'y'
#        _out = 'N'
        _out = 'y'
#        _var = 'PyCTP_PyUnicode_DecodeGB2312('+objectid+'->'+memberid+')'
        _var = objectid+'->'+memberid
        _dec = 'char *'+objectid+'_'+memberid+ ' = nullptr;\n'
#        _ref = ', \"gb2312\", &'+objectid+'_'+memberid
        _ref = ', &'+objectid+'_'+memberid
#        _set = 'if(' + objectid+'_'+memberid + ' != nullptr){ strcpy_s('+objectid+'->'+memberid + ', ' + objectid+'_'+memberid + '); PyMem_Free(' + objectid+'_'+memberid + '); ' + objectid+'_'+memberid + ' = nullptr; }'
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
    return dict(out='d',inp='d', var=objectid+'->'+memberid, dec='double '+objectid+'_'+memberid+' = 0.0;\n'
                , ref=', &'+objectid+'_'+memberid
                , sett = objectid+'->'+memberid + ' = ' + objectid+'_'+memberid + ';')

def funint(objectid, memberid, typeid, length):
    return dict(out='i',inp='i', var=objectid+'->'+memberid, dec='int '+objectid+'_'+memberid+' = 0;\n'
                , ref=', &'+objectid+'_'+memberid
                , sett = objectid+'->'+memberid + ' = ' + objectid+'_'+memberid + ';')

def funshort(objectid, memberid, typeid, length):
    return dict(out='h',inp='h', var=objectid+'->'+memberid, dec='short '+objectid+'_'+memberid+' = 0;\n'
                , ref=', &'+objectid+'_'+memberid
                , sett = objectid+'->'+memberid + ' = ' + objectid+'_'+memberid + ';')

typefun = dict(char=funchar,double=fundouble, int=funint, short=funshort)
cppsourcecode = ""
for (key,value) in codetree.items():
    if(value['type'] == 'struct'):
        # 处理成员
        outformat = ""
        outvarlist = ""
        keywordslist = ""
        keywordss = ""
        declaration = ""
        refcode = ""
        setcode = ""
        for (member_name,member_class) in value['value'].items():
            member_type = member_class['type']
            member_type = codetree.get(member_type)
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
#        outformat = outformat.lstrip(',')
#        cppsourcecode += "PyObject *PyCTP_PyDict_FromStruct(" + key + " *p"+key.replace("CThostFtdc", "")+")\n"
#        cppsourcecode += "{\n"
#        cppsourcecode += "\tif(p"+key.replace("CThostFtdc", "")+" == nullptr) Py_RETURN_NONE;\n"
#        cppsourcecode += "\treturn Py_BuildValue(\"{"+outformat+"}\"\n"+outvarlist+"\t\t);\n"
#        cppsourcecode += "}\n"
print(cppsourcecode)

# 处理预定义常量
#for (key,value) in codetree.items():
#    if(value['type'] == '#define'):
#        pass
#        #print("PyCTP_PyModule_AddCharMacro(module, "+key+");")
#
#
#
#
#
#
#
#
#
#
#
#
