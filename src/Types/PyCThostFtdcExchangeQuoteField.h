#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEQUOTEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所报价信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeQuoteField data;
} PyCThostFtdcExchangeQuoteFieldData;

extern PyTypeObject *PyCThostFtdcExchangeQuoteFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeQuoteFieldType_exec(PyObject *module);

#endif