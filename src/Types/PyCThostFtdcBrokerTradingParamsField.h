#ifndef PYCTP_TYPES_PYCTHOSTFTDCBROKERTRADINGPARAMSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCBROKERTRADINGPARAMSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司交易参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcBrokerTradingParamsField data;
} PyCThostFtdcBrokerTradingParamsFieldData;

extern PyTypeObject *PyCThostFtdcBrokerTradingParamsFieldType;
extern int PyCTP_module_add_PyCThostFtdcBrokerTradingParamsFieldType_exec(PyObject *module);

#endif