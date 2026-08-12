#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYACCOUNTREGISTERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYACCOUNTREGISTERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///请求查询银期签约关系

typedef struct PyCThostFtdcQryAccountregisterField {
    PyObject_HEAD
    CThostFtdcQryAccountregisterField data;
} PyCThostFtdcQryAccountregisterField;

extern PyTypeObject PyCThostFtdcQryAccountregisterFieldType;

extern int PyCThostFtdcQryAccountregisterFieldType_init(PyObject *module);

#endif
