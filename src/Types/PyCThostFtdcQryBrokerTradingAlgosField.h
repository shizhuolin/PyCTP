#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYBROKERTRADINGALGOSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYBROKERTRADINGALGOSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司交易算法

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryBrokerTradingAlgosField data;
} PyCThostFtdcQryBrokerTradingAlgosFieldData;

extern PyTypeObject *PyCThostFtdcQryBrokerTradingAlgosFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryBrokerTradingAlgosFieldType_exec(PyObject *module);

#endif