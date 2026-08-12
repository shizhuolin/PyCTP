#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREMOVEPARKEDORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREMOVEPARKEDORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///删除预埋撤单

typedef struct PyCThostFtdcRemoveParkedOrderActionField {
    PyObject_HEAD
    CThostFtdcRemoveParkedOrderActionField data;
} PyCThostFtdcRemoveParkedOrderActionField;

extern PyTypeObject PyCThostFtdcRemoveParkedOrderActionFieldType;

extern int PyCThostFtdcRemoveParkedOrderActionFieldType_init(PyObject *module);

#endif
