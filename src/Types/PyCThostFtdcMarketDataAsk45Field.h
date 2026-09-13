#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAASK45FIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAASK45FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情申卖四、五属性

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataAsk45Field data;
} PyCThostFtdcMarketDataAsk45FieldData;

extern PyTypeObject *PyCThostFtdcMarketDataAsk45FieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataAsk45FieldType_exec(PyObject *module);

#endif