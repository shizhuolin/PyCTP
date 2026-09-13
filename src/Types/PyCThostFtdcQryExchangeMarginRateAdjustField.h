#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEMARGINRATEADJUSTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEMARGINRATEADJUSTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所调整保证金率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeMarginRateAdjustField data;
} PyCThostFtdcQryExchangeMarginRateAdjustFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeMarginRateAdjustFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeMarginRateAdjustFieldType_exec(PyObject *module);

#endif