#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYBROKERTRADINGPARAMSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYBROKERTRADINGPARAMSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司交易参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryBrokerTradingParamsField data;
} PyCThostFtdcQryBrokerTradingParamsFieldData;

extern PyTypeObject *PyCThostFtdcQryBrokerTradingParamsFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryBrokerTradingParamsFieldType_exec(PyObject *module);

#endif