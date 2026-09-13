#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYLOGINFORBIDDENUSERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYLOGINFORBIDDENUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询禁止登录用户

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryLoginForbiddenUserField data;
} PyCThostFtdcQryLoginForbiddenUserFieldData;

extern PyTypeObject *PyCThostFtdcQryLoginForbiddenUserFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryLoginForbiddenUserFieldType_exec(PyObject *module);

#endif