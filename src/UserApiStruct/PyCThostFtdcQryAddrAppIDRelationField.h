#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYADDRAPPIDRELATIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYADDRAPPIDRELATIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///服务地址和AppID的关系查询

typedef struct PyCThostFtdcQryAddrAppIDRelationField {
    PyObject_HEAD
    CThostFtdcQryAddrAppIDRelationField data;
} PyCThostFtdcQryAddrAppIDRelationField;

extern PyTypeObject PyCThostFtdcQryAddrAppIDRelationFieldType;

extern int PyCThostFtdcQryAddrAppIDRelationFieldType_init(PyObject *module);

#endif
