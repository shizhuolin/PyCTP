#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTBATCHORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTBATCHORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入批量报单操作

typedef struct PyCThostFtdcInputBatchOrderActionField {
    PyObject_HEAD
    CThostFtdcInputBatchOrderActionField data;
} PyCThostFtdcInputBatchOrderActionField;

extern PyTypeObject PyCThostFtdcInputBatchOrderActionFieldType;

extern int PyCThostFtdcInputBatchOrderActionFieldType_init(PyObject *module);

#endif
