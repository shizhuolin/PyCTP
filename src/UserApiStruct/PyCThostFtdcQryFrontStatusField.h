#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYFRONTSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYFRONTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询前置状态

typedef struct PyCThostFtdcQryFrontStatusField {
    PyObject_HEAD
    CThostFtdcQryFrontStatusField data;
} PyCThostFtdcQryFrontStatusField;

extern PyTypeObject PyCThostFtdcQryFrontStatusFieldType;

extern int PyCThostFtdcQryFrontStatusFieldType_init(PyObject *module);

#endif
