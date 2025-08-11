#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBATCHORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBATCHORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryBatchOrderActionField {
    PyObject_HEAD
    CThostFtdcQryBatchOrderActionField data;
} PyCThostFtdcQryBatchOrderActionField;

extern PyTypeObject PyCThostFtdcQryBatchOrderActionFieldType;

extern int PyCThostFtdcQryBatchOrderActionFieldType_init(PyObject *module);

#endif
