#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONSELFCLOSEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONSELFCLOSEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权自对冲查询

typedef struct PyCThostFtdcQryOptionSelfCloseField {
    PyObject_HEAD
    CThostFtdcQryOptionSelfCloseField data;
} PyCThostFtdcQryOptionSelfCloseField;

extern PyTypeObject PyCThostFtdcQryOptionSelfCloseFieldType;

extern int PyCThostFtdcQryOptionSelfCloseFieldType_init(PyObject *module);

#endif
