#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAAVERAGEPRICEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAAVERAGEPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///成交均价

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataAveragePriceField data;
} PyCThostFtdcMarketDataAveragePriceFieldData;

extern PyTypeObject *PyCThostFtdcMarketDataAveragePriceFieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataAveragePriceFieldType_exec(PyObject *module);

#endif