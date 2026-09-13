#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYBROKERUSERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYBROKERUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司用户

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryBrokerUserField data;
} PyCThostFtdcQryBrokerUserFieldData;

extern PyTypeObject *PyCThostFtdcQryBrokerUserFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryBrokerUserFieldType_exec(PyObject *module);

#endif