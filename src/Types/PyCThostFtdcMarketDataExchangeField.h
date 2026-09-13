#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAEXCHANGEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAEXCHANGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情交易所代码属性

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataExchangeField data;
} PyCThostFtdcMarketDataExchangeFieldData;

extern PyTypeObject *PyCThostFtdcMarketDataExchangeFieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataExchangeFieldType_exec(PyObject *module);

#endif