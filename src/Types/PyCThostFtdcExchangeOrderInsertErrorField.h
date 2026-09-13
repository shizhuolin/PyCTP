#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEORDERINSERTERRORFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEORDERINSERTERRORFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所报单插入失败

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeOrderInsertErrorField data;
} PyCThostFtdcExchangeOrderInsertErrorFieldData;

extern PyTypeObject *PyCThostFtdcExchangeOrderInsertErrorFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeOrderInsertErrorFieldType_exec(PyObject *module);

#endif