#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFENSUSERINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFENSUSERINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///Fens用户信息

typedef struct PyCThostFtdcFensUserInfoField {
    PyObject_HEAD
    CThostFtdcFensUserInfoField data;
} PyCThostFtdcFensUserInfoField;

extern PyTypeObject PyCThostFtdcFensUserInfoFieldType;

extern int PyCThostFtdcFensUserInfoFieldType_init(PyObject *module);

#endif
