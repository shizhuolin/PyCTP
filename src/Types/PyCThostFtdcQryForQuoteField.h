#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYFORQUOTEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYFORQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///询价查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryForQuoteField data;
} PyCThostFtdcQryForQuoteFieldData;

extern PyTypeObject *PyCThostFtdcQryForQuoteFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryForQuoteFieldType_exec(PyObject *module);

#endif