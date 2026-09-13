#ifndef PYCTP_TYPES_PYCTHOSTFTDCBROKERDEPOSITFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCBROKERDEPOSITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司资金

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcBrokerDepositField data;
} PyCThostFtdcBrokerDepositFieldData;

extern PyTypeObject *PyCThostFtdcBrokerDepositFieldType;
extern int PyCTP_module_add_PyCThostFtdcBrokerDepositFieldType_exec(PyObject *module);

#endif