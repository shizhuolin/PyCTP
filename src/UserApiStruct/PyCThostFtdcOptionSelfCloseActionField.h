#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONSELFCLOSEACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONSELFCLOSEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权自对冲操作

typedef struct PyCThostFtdcOptionSelfCloseActionField {
    PyObject_HEAD
    CThostFtdcOptionSelfCloseActionField data;
} PyCThostFtdcOptionSelfCloseActionField;

extern PyTypeObject PyCThostFtdcOptionSelfCloseActionFieldType;

extern int PyCThostFtdcOptionSelfCloseActionFieldType_init(PyObject *module);

#endif
