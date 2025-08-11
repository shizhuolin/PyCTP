#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFORCEUSERLOGOUTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFORCEUSERLOGOUTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcForceUserLogoutField {
    PyObject_HEAD
    CThostFtdcForceUserLogoutField data;
} PyCThostFtdcForceUserLogoutField;

extern PyTypeObject PyCThostFtdcForceUserLogoutFieldType;

extern int PyCThostFtdcForceUserLogoutFieldType_init(PyObject *module);

#endif
