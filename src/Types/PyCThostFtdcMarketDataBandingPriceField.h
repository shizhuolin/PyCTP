#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATABANDINGPRICEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATABANDINGPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情上下带价

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataBandingPriceField data;
} PyCThostFtdcMarketDataBandingPriceFieldData;

extern PyTypeObject *PyCThostFtdcMarketDataBandingPriceFieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataBandingPriceFieldType_exec(PyObject *module);

#endif