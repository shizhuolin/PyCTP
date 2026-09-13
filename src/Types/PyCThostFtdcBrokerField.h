#ifndef PYCTP_TYPES_PYCTHOSTFTDCBROKERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCBROKERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经纪公司

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcBrokerField data;
} PyCThostFtdcBrokerFieldData;

extern PyTypeObject *PyCThostFtdcBrokerFieldType;
extern int PyCTP_module_add_PyCThostFtdcBrokerFieldType_exec(PyObject *module);

#endif