#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATABID23FIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATABID23FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情申买二、三属性

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataBid23Field data;
} PyCThostFtdcMarketDataBid23FieldData;

extern PyTypeObject *PyCThostFtdcMarketDataBid23FieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataBid23FieldType_exec(PyObject *module);

#endif