#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCURRDRIDENTITYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCURRDRIDENTITYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryCurrDRIdentityField {
    PyObject_HEAD
    CThostFtdcQryCurrDRIdentityField data;
} PyCThostFtdcQryCurrDRIdentityField;

extern PyTypeObject PyCThostFtdcQryCurrDRIdentityFieldType;

extern int PyCThostFtdcQryCurrDRIdentityFieldType_init(PyObject *module);

#endif
