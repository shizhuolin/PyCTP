#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSUPERUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSUPERUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySuperUserField {
    PyObject_HEAD
    CThostFtdcQrySuperUserField data;
} PyCThostFtdcQrySuperUserField;

extern PyTypeObject PyCThostFtdcQrySuperUserFieldType;

extern int PyCThostFtdcQrySuperUserFieldType_init(PyObject *module);

#endif
