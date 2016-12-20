//转换CTP预处理定义

#ifndef PYCTP_USERAPIDATATYPE_H
#define PYCTP_USERAPIDATATYPE_H

//增加字符魔法处理
#define PyModule_AddCharMacro(m, c) PyModule_AddCharConstant(m, #c, c)

//增加字符常量
int PyModule_AddCharConstant(PyObject *m, const char *name, char value);

//增加CTP常量定义
int PyModule_AddCTPConstant(PyObject *m);



#endif