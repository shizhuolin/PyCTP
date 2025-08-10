#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPARTBROKERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPARTBROKERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///会员编码和经纪公司编码对照表

typedef struct PyCThostFtdcPartBrokerField {
    PyObject_HEAD
    CThostFtdcPartBrokerField data;
} PyCThostFtdcPartBrokerField;

extern PyTypeObject PyCThostFtdcPartBrokerFieldType;

extern int PyCThostFtdcPartBrokerFieldType_init(PyObject *module);

#endif
