#ifndef PYCTP_TYPES_PYCTHOSTFTDCQUERYBROKERDEPOSITFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQUERYBROKERDEPOSITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司资金

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQueryBrokerDepositField data;
} PyCThostFtdcQueryBrokerDepositFieldData;

extern PyTypeObject *PyCThostFtdcQueryBrokerDepositFieldType;
extern int PyCTP_module_add_PyCThostFtdcQueryBrokerDepositFieldType_exec(PyObject *module);

#endif