#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBPROMOTIONPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBPROMOTIONPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryCombPromotionParamField {
    PyObject_HEAD
    CThostFtdcQryCombPromotionParamField data;
} PyCThostFtdcQryCombPromotionParamField;

extern PyTypeObject PyCThostFtdcQryCombPromotionParamFieldType;

extern int PyCThostFtdcQryCombPromotionParamFieldType_init(PyObject *module);

#endif
