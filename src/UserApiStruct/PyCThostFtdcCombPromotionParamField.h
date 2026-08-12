#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMBPROMOTIONPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMBPROMOTIONPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合优惠比例

typedef struct PyCThostFtdcCombPromotionParamField {
    PyObject_HEAD
    CThostFtdcCombPromotionParamField data;
} PyCThostFtdcCombPromotionParamField;

extern PyTypeObject PyCThostFtdcCombPromotionParamFieldType;

extern int PyCThostFtdcCombPromotionParamFieldType_init(PyObject *module);

#endif
