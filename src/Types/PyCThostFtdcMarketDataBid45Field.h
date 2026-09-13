#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATABID45FIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATABID45FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情申买四、五属性

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataBid45Field data;
} PyCThostFtdcMarketDataBid45FieldData;

extern PyTypeObject *PyCThostFtdcMarketDataBid45FieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataBid45FieldType_exec(PyObject *module);

#endif