#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBATCHORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBATCHORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///批量报单操作

typedef struct PyCThostFtdcBatchOrderActionField {
    PyObject_HEAD
    CThostFtdcBatchOrderActionField data;
} PyCThostFtdcBatchOrderActionField;

extern PyTypeObject PyCThostFtdcBatchOrderActionFieldType;

extern int PyCThostFtdcBatchOrderActionFieldType_init(PyObject *module);

#endif
