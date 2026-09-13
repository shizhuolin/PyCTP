//转换CTP预处理定义

#ifndef PYCTP_PYCONSTANTS_H
#define PYCTP_PYCONSTANTS_H

//增加字符魔法处理
#define PyModule_AddCharMacro(m, c) PyModule_AddCharConstant((m), #c, (c))
#define PyModule_AddStrMacro(m, c) PyModule_AddStrConstant((m), #c, (c))

//增加字符常量
extern int PyModule_AddCharConstant(PyObject *m, const char *name, const char value);
extern int PyModule_AddStrConstant(PyObject *m, const char *name, const char *value);

//增加CTP常量定义
extern int PyCTP_module_add_PyConstants_exec(PyObject *m);

#endif
