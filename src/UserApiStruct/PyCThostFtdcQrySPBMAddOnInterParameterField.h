#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMADDONINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMADDONINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM附加跨品种抵扣参数查询

typedef struct PyCThostFtdcQrySPBMAddOnInterParameterField {
    PyObject_HEAD
    CThostFtdcQrySPBMAddOnInterParameterField data;
} PyCThostFtdcQrySPBMAddOnInterParameterField;

extern PyTypeObject PyCThostFtdcQrySPBMAddOnInterParameterFieldType;

extern int PyCThostFtdcQrySPBMAddOnInterParameterFieldType_init(PyObject *module);

#endif
