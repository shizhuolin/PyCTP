#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYQUOTEACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYQUOTEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报价操作查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryQuoteActionField data;
} PyCThostFtdcQryQuoteActionFieldData;

extern PyTypeObject *PyCThostFtdcQryQuoteActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryQuoteActionFieldType_exec(PyObject *module);

#endif