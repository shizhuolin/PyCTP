#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYLOGINFORBIDDENIPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYLOGINFORBIDDENIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询禁止登录IP

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryLoginForbiddenIPField data;
} PyCThostFtdcQryLoginForbiddenIPFieldData;

extern PyTypeObject *PyCThostFtdcQryLoginForbiddenIPFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryLoginForbiddenIPFieldType_exec(PyObject *module);

#endif