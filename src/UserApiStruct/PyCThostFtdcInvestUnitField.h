#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTUNITFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTUNITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestUnitField {
    PyObject_HEAD
    CThostFtdcInvestUnitField data;
} PyCThostFtdcInvestUnitField;

extern PyTypeObject PyCThostFtdcInvestUnitFieldType;

extern int PyCThostFtdcInvestUnitFieldType_init(PyObject *module);

#endif
