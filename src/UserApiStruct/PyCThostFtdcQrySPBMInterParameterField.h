#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM跨品种抵扣参数查询

typedef struct PyCThostFtdcQrySPBMInterParameterField {
    PyObject_HEAD
    CThostFtdcQrySPBMInterParameterField data;
} PyCThostFtdcQrySPBMInterParameterField;

extern PyTypeObject PyCThostFtdcQrySPBMInterParameterFieldType;

extern int PyCThostFtdcQrySPBMInterParameterFieldType_init(PyObject *module);

#endif
