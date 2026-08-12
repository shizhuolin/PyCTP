#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///申请组合查询

typedef struct PyCThostFtdcQryCombActionField {
    PyObject_HEAD
    CThostFtdcQryCombActionField data;
} PyCThostFtdcQryCombActionField;

extern PyTypeObject PyCThostFtdcQryCombActionFieldType;

extern int PyCThostFtdcQryCombActionFieldType_init(PyObject *module);

#endif
