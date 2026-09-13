#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEMARGINRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所保证金率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeMarginRateField data;
} PyCThostFtdcQryExchangeMarginRateFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeMarginRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeMarginRateFieldType_exec(PyObject *module);

#endif