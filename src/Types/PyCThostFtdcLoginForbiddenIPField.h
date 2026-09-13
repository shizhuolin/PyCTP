#ifndef PYCTP_TYPES_PYCTHOSTFTDCLOGINFORBIDDENIPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCLOGINFORBIDDENIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///禁止登录IP

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcLoginForbiddenIPField data;
} PyCThostFtdcLoginForbiddenIPFieldData;

extern PyTypeObject *PyCThostFtdcLoginForbiddenIPFieldType;
extern int PyCTP_module_add_PyCThostFtdcLoginForbiddenIPFieldType_exec(PyObject *module);

#endif