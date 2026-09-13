#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///市场行情

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataField data;
} PyCThostFtdcMarketDataFieldData;

extern PyTypeObject *PyCThostFtdcMarketDataFieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataFieldType_exec(PyObject *module);

#endif