#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYERRORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYERRORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询错误报单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryErrOrderField data;
} PyCThostFtdcQryErrOrderFieldData;

extern PyTypeObject *PyCThostFtdcQryErrOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryErrOrderFieldType_exec(PyObject *module);

#endif