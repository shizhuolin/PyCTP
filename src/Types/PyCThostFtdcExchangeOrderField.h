#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所报单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeOrderField data;
} PyCThostFtdcExchangeOrderFieldData;

extern PyTypeObject *PyCThostFtdcExchangeOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeOrderFieldType_exec(PyObject *module);

#endif