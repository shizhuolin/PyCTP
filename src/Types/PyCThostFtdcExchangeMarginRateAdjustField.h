#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEMARGINRATEADJUSTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEMARGINRATEADJUSTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所保证金率调整

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeMarginRateAdjustField data;
} PyCThostFtdcExchangeMarginRateAdjustFieldData;

extern PyTypeObject *PyCThostFtdcExchangeMarginRateAdjustFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeMarginRateAdjustFieldType_exec(PyObject *module);

#endif