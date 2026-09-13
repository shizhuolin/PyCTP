#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEQUOTEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所报价查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeQuoteField data;
} PyCThostFtdcQryExchangeQuoteFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeQuoteFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeQuoteFieldType_exec(PyObject *module);

#endif