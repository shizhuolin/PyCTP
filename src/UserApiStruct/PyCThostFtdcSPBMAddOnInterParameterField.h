#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMADDONINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMADDONINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM附加跨品种抵扣参数

typedef struct PyCThostFtdcSPBMAddOnInterParameterField {
    PyObject_HEAD
    CThostFtdcSPBMAddOnInterParameterField data;
} PyCThostFtdcSPBMAddOnInterParameterField;

extern PyTypeObject PyCThostFtdcSPBMAddOnInterParameterFieldType;

extern int PyCThostFtdcSPBMAddOnInterParameterFieldType_init(PyObject *module);

#endif
