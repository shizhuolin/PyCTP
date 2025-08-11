#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBATCHORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBATCHORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcBatchOrderActionField {
    PyObject_HEAD
    CThostFtdcBatchOrderActionField data;
} PyCThostFtdcBatchOrderActionField;

extern PyTypeObject PyCThostFtdcBatchOrderActionFieldType;

extern int PyCThostFtdcBatchOrderActionFieldType_init(PyObject *module);

#endif
