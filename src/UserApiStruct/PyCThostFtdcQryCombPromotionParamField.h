#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBPROMOTIONPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBPROMOTIONPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询组合优惠比例

typedef struct PyCThostFtdcQryCombPromotionParamField {
    PyObject_HEAD
    CThostFtdcQryCombPromotionParamField data;
} PyCThostFtdcQryCombPromotionParamField;

extern PyTypeObject PyCThostFtdcQryCombPromotionParamFieldType;

extern int PyCThostFtdcQryCombPromotionParamFieldType_init(PyObject *module);

#endif
