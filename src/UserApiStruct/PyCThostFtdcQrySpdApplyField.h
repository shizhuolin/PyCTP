#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPDAPPLYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPDAPPLYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利套保申请查询

typedef struct PyCThostFtdcQrySpdApplyField {
    PyObject_HEAD
    CThostFtdcQrySpdApplyField data;
} PyCThostFtdcQrySpdApplyField;

extern PyTypeObject PyCThostFtdcQrySpdApplyFieldType;

extern int PyCThostFtdcQrySpdApplyFieldType_init(PyObject *module);

#endif
