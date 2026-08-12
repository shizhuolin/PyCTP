#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBLEGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBLEGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合腿信息查询

typedef struct PyCThostFtdcQryCombLegField {
    PyObject_HEAD
    CThostFtdcQryCombLegField data;
} PyCThostFtdcQryCombLegField;

extern PyTypeObject PyCThostFtdcQryCombLegFieldType;

extern int PyCThostFtdcQryCombLegFieldType_init(PyObject *module);

#endif
