#ifndef PYCTP_TYPES_PYCTHOSTFTDCLOGINFORBIDDENUSERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCLOGINFORBIDDENUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///禁止登录用户

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcLoginForbiddenUserField data;
} PyCThostFtdcLoginForbiddenUserFieldData;

extern PyTypeObject *PyCThostFtdcLoginForbiddenUserFieldType;
extern int PyCTP_module_add_PyCThostFtdcLoginForbiddenUserFieldType_exec(PyObject *module);

#endif