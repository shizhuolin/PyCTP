#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBATCHORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYBATCHORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询批量报单操作

typedef struct PyCThostFtdcQryBatchOrderActionField {
    PyObject_HEAD
    CThostFtdcQryBatchOrderActionField data;
} PyCThostFtdcQryBatchOrderActionField;

extern PyTypeObject PyCThostFtdcQryBatchOrderActionFieldType;

extern int PyCThostFtdcQryBatchOrderActionFieldType_init(PyObject *module);

#endif
