#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEFORQUOTEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEFORQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所询价查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeForQuoteField data;
} PyCThostFtdcQryExchangeForQuoteFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeForQuoteFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeForQuoteFieldType_exec(PyObject *module);

#endif