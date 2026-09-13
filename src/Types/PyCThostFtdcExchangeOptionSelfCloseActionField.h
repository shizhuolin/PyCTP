#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEOPTIONSELFCLOSEACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEOPTIONSELFCLOSEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所期权自对冲操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeOptionSelfCloseActionField data;
} PyCThostFtdcExchangeOptionSelfCloseActionFieldData;

extern PyTypeObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeOptionSelfCloseActionFieldType_exec(PyObject *module);

#endif