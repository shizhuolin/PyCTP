#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGESEQUENCEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGESEQUENCEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所状态

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeSequenceField data;
} PyCThostFtdcExchangeSequenceFieldData;

extern PyTypeObject *PyCThostFtdcExchangeSequenceFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeSequenceFieldType_exec(PyObject *module);

#endif