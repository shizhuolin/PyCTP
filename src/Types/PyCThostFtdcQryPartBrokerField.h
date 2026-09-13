#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYPARTBROKERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYPARTBROKERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司会员代码

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryPartBrokerField data;
} PyCThostFtdcQryPartBrokerFieldData;

extern PyTypeObject *PyCThostFtdcQryPartBrokerFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryPartBrokerFieldType_exec(PyObject *module);

#endif