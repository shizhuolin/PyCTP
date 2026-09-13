#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGESEQUENCEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGESEQUENCEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所状态

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeSequenceField data;
} PyCThostFtdcQryExchangeSequenceFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeSequenceFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeSequenceFieldType_exec(PyObject *module);

#endif