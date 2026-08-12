#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMBACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///申请组合

typedef struct PyCThostFtdcCombActionField {
    PyObject_HEAD
    CThostFtdcCombActionField data;
} PyCThostFtdcCombActionField;

extern PyTypeObject PyCThostFtdcCombActionFieldType;

extern int PyCThostFtdcCombActionFieldType_init(PyObject *module);

#endif
