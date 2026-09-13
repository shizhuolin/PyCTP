#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGERATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGERATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///汇率

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeRateField data;
} PyCThostFtdcExchangeRateFieldData;

extern PyTypeObject *PyCThostFtdcExchangeRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeRateFieldType_exec(PyObject *module);

#endif