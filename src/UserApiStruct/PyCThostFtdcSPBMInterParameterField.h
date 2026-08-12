#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM跨品种抵扣参数

typedef struct PyCThostFtdcSPBMInterParameterField {
    PyObject_HEAD
    CThostFtdcSPBMInterParameterField data;
} PyCThostFtdcSPBMInterParameterField;

extern PyTypeObject PyCThostFtdcSPBMInterParameterFieldType;

extern int PyCThostFtdcSPBMInterParameterFieldType_init(PyObject *module);

#endif
