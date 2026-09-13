#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGERATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGERATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询汇率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeRateField data;
} PyCThostFtdcQryExchangeRateFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeRateFieldType_exec(PyObject *module);

#endif