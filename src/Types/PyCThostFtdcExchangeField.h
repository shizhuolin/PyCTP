#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeField data;
} PyCThostFtdcExchangeFieldData;

extern PyTypeObject *PyCThostFtdcExchangeFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeFieldType_exec(PyObject *module);

#endif