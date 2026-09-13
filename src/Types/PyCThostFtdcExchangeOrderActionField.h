#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所报单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeOrderActionField data;
} PyCThostFtdcExchangeOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcExchangeOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeOrderActionFieldType_exec(PyObject *module);

#endif