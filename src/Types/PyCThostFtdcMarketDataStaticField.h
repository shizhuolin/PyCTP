#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATASTATICFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATASTATICFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情静态属性

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataStaticField data;
} PyCThostFtdcMarketDataStaticFieldData;

extern PyTypeObject *PyCThostFtdcMarketDataStaticFieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataStaticFieldType_exec(PyObject *module);

#endif