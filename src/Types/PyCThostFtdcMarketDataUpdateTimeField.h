#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAUPDATETIMEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARKETDATAUPDATETIMEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///行情更新时间属性

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarketDataUpdateTimeField data;
} PyCThostFtdcMarketDataUpdateTimeFieldData;

extern PyTypeObject *PyCThostFtdcMarketDataUpdateTimeFieldType;
extern int PyCTP_module_add_PyCThostFtdcMarketDataUpdateTimeFieldType_exec(PyObject *module);

#endif