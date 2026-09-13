#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYBROKERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYBROKERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryBrokerField data;
} PyCThostFtdcQryBrokerFieldData;

extern PyTypeObject *PyCThostFtdcQryBrokerFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryBrokerFieldType_exec(PyObject *module);

#endif