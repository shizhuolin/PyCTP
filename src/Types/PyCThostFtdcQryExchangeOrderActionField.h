#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所报单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeOrderActionField data;
} PyCThostFtdcQryExchangeOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeOrderActionFieldType_exec(PyObject *module);

#endif