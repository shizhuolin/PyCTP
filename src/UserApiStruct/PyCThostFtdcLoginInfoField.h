#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOGININFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOGININFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///登录信息

typedef struct PyCThostFtdcLoginInfoField {
    PyObject_HEAD
    CThostFtdcLoginInfoField data;
} PyCThostFtdcLoginInfoField;

extern PyTypeObject PyCThostFtdcLoginInfoFieldType;

extern int PyCThostFtdcLoginInfoFieldType_init(PyObject *module);

#endif
