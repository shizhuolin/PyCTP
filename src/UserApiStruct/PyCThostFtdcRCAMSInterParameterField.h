#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS跨品种风险折抵参数

typedef struct PyCThostFtdcRCAMSInterParameterField {
    PyObject_HEAD
    CThostFtdcRCAMSInterParameterField data;
} PyCThostFtdcRCAMSInterParameterField;

extern PyTypeObject PyCThostFtdcRCAMSInterParameterFieldType;

extern int PyCThostFtdcRCAMSInterParameterFieldType_init(PyObject *module);

#endif
