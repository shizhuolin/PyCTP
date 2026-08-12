#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARKEDORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARKEDORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询预埋撤单

typedef struct PyCThostFtdcQryParkedOrderActionField {
    PyObject_HEAD
    CThostFtdcQryParkedOrderActionField data;
} PyCThostFtdcQryParkedOrderActionField;

extern PyTypeObject PyCThostFtdcQryParkedOrderActionFieldType;

extern int PyCThostFtdcQryParkedOrderActionFieldType_init(PyObject *module);

#endif
