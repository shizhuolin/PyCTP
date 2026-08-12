#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARTBROKERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARTBROKERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询经纪公司会员代码

typedef struct PyCThostFtdcQryPartBrokerField {
    PyObject_HEAD
    CThostFtdcQryPartBrokerField data;
} PyCThostFtdcQryPartBrokerField;

extern PyTypeObject PyCThostFtdcQryPartBrokerFieldType;

extern int PyCThostFtdcQryPartBrokerFieldType_init(PyObject *module);

#endif
