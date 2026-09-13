#ifndef PYCTP_TYPES_PYCTHOSTFTDCPARTBROKERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCPARTBROKERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///会员编码和经纪公司编码对照表

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcPartBrokerField data;
} PyCThostFtdcPartBrokerFieldData;

extern PyTypeObject *PyCThostFtdcPartBrokerFieldType;
extern int PyCTP_module_add_PyCThostFtdcPartBrokerFieldType_exec(PyObject *module);

#endif