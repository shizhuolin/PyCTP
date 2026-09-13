#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYFORQUOTEPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYFORQUOTEPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询询价价差参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryForQuoteParamField data;
} PyCThostFtdcQryForQuoteParamFieldData;

extern PyTypeObject *PyCThostFtdcQryForQuoteParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryForQuoteParamFieldType_exec(PyObject *module);

#endif