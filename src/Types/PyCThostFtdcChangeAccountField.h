#ifndef PYCTP_TYPES_PYCTHOSTFTDCCHANGEACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCHANGEACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期变更银行账号信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcChangeAccountField data;
} PyCThostFtdcChangeAccountFieldData;

extern PyTypeObject *PyCThostFtdcChangeAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcChangeAccountFieldType_exec(PyObject *module);

#endif