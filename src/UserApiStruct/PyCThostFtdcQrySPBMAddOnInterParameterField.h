#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMADDONINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMADDONINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySPBMAddOnInterParameterField {
    PyObject_HEAD
    CThostFtdcQrySPBMAddOnInterParameterField data;
} PyCThostFtdcQrySPBMAddOnInterParameterField;

extern PyTypeObject PyCThostFtdcQrySPBMAddOnInterParameterFieldType;

extern int PyCThostFtdcQrySPBMAddOnInterParameterFieldType_init(PyObject *module);

#endif
