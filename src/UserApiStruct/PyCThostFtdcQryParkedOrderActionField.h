#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARKEDORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPARKEDORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryParkedOrderActionField {
    PyObject_HEAD
    CThostFtdcQryParkedOrderActionField data;
} PyCThostFtdcQryParkedOrderActionField;

extern PyTypeObject PyCThostFtdcQryParkedOrderActionFieldType;

extern int PyCThostFtdcQryParkedOrderActionFieldType_init(PyObject *module);

#endif
