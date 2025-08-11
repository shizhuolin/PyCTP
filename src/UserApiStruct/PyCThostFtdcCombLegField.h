#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMBLEGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMBLEGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcCombLegField {
    PyObject_HEAD
    CThostFtdcCombLegField data;
} PyCThostFtdcCombLegField;

extern PyTypeObject PyCThostFtdcCombLegFieldType;

extern int PyCThostFtdcCombLegFieldType_init(PyObject *module);

#endif
