#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEORDERACTIONERRORFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEORDERACTIONERRORFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所报单操作失败

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeOrderActionErrorField data;
} PyCThostFtdcExchangeOrderActionErrorFieldData;

extern PyTypeObject *PyCThostFtdcExchangeOrderActionErrorFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeOrderActionErrorFieldType_exec(PyObject *module);

#endif