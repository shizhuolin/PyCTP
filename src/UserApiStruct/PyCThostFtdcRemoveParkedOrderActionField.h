#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREMOVEPARKEDORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREMOVEPARKEDORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRemoveParkedOrderActionField {
    PyObject_HEAD
    CThostFtdcRemoveParkedOrderActionField data;
} PyCThostFtdcRemoveParkedOrderActionField;

extern PyTypeObject PyCThostFtdcRemoveParkedOrderActionFieldType;

extern int PyCThostFtdcRemoveParkedOrderActionFieldType_init(PyObject *module);

#endif
