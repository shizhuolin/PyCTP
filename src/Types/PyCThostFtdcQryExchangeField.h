#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易所

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeField data;
} PyCThostFtdcQryExchangeFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeFieldType_exec(PyObject *module);

#endif