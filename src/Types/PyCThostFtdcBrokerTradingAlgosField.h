#ifndef PYCTP_TYPES_PYCTHOSTFTDCBROKERTRADINGALGOSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCBROKERTRADINGALGOSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司交易算法

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcBrokerTradingAlgosField data;
} PyCThostFtdcBrokerTradingAlgosFieldData;

extern PyTypeObject *PyCThostFtdcBrokerTradingAlgosFieldType;
extern int PyCTP_module_add_PyCThostFtdcBrokerTradingAlgosFieldType_exec(PyObject *module);

#endif