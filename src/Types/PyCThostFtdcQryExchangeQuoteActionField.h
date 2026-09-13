#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEQUOTEACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEQUOTEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所报价操作查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeQuoteActionField data;
} PyCThostFtdcQryExchangeQuoteActionFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeQuoteActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeQuoteActionFieldType_exec(PyObject *module);

#endif