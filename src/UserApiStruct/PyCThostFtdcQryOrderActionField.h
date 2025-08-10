#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询报单操作

typedef struct PyCThostFtdcQryOrderActionField {
    PyObject_HEAD
    CThostFtdcQryOrderActionField data;
} PyCThostFtdcQryOrderActionField;

extern PyTypeObject PyCThostFtdcQryOrderActionFieldType;

extern int PyCThostFtdcQryOrderActionFieldType_init(PyObject *module);

#endif
