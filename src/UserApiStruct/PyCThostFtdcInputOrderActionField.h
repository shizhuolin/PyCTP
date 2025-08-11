#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInputOrderActionField {
    PyObject_HEAD
    CThostFtdcInputOrderActionField data;
} PyCThostFtdcInputOrderActionField;

extern PyTypeObject PyCThostFtdcInputOrderActionFieldType;

extern int PyCThostFtdcInputOrderActionFieldType_init(PyObject *module);

#endif
