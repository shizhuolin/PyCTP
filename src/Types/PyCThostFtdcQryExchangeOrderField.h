#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所报单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeOrderField data;
} PyCThostFtdcQryExchangeOrderFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeOrderFieldType_exec(PyObject *module);

#endif