#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYHISORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYHISORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询报单

typedef struct PyCThostFtdcQryHisOrderField {
    PyObject_HEAD
    CThostFtdcQryHisOrderField data;
} PyCThostFtdcQryHisOrderField;

extern PyTypeObject PyCThostFtdcQryHisOrderFieldType;

extern int PyCThostFtdcQryHisOrderFieldType_init(PyObject *module);

#endif
