#ifndef PYCTP_TYPES_PYCTHOSTFTDCDEPTHMARKETDATAFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCDEPTHMARKETDATAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///深度行情

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcDepthMarketDataField data;
} PyCThostFtdcDepthMarketDataFieldData;

extern PyTypeObject *PyCThostFtdcDepthMarketDataFieldType;
extern int PyCTP_module_add_PyCThostFtdcDepthMarketDataFieldType_exec(PyObject *module);

#endif