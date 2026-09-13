#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATABASEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATABASEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情基础属性

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataBaseField data;
} PyCThostFtdcMarketDataBaseFieldData;

extern PyTypeObject *PyCThostFtdcMarketDataBaseFieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataBaseFieldType_exec(PyObject *module);

#endif