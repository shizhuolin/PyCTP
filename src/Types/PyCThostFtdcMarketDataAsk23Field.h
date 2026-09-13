#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAASK23FIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAASK23FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情申卖二、三属性

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataAsk23Field data;
} PyCThostFtdcMarketDataAsk23FieldData;

extern PyTypeObject *PyCThostFtdcMarketDataAsk23FieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataAsk23FieldType_exec(PyObject *module);

#endif