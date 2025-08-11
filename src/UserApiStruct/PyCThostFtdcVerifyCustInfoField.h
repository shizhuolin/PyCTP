#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCVERIFYCUSTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCVERIFYCUSTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcVerifyCustInfoField {
    PyObject_HEAD
    CThostFtdcVerifyCustInfoField data;
} PyCThostFtdcVerifyCustInfoField;

extern PyTypeObject PyCThostFtdcVerifyCustInfoFieldType;

extern int PyCThostFtdcVerifyCustInfoFieldType_init(PyObject *module);

#endif
