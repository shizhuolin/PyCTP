#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCURRDRIDENTITYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCURRDRIDENTITYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询当前交易中心

typedef struct PyCThostFtdcQryCurrDRIdentityField {
    PyObject_HEAD
    CThostFtdcQryCurrDRIdentityField data;
} PyCThostFtdcQryCurrDRIdentityField;

extern PyTypeObject PyCThostFtdcQryCurrDRIdentityFieldType;

extern int PyCThostFtdcQryCurrDRIdentityFieldType_init(PyObject *module);

#endif
