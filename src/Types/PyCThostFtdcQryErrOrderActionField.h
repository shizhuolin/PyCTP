#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYERRORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYERRORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询错误报单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryErrOrderActionField data;
} PyCThostFtdcQryErrOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcQryErrOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryErrOrderActionFieldType_exec(PyObject *module);

#endif