#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryRCAMSInterParameterField {
    PyObject_HEAD
    CThostFtdcQryRCAMSInterParameterField data;
} PyCThostFtdcQryRCAMSInterParameterField;

extern PyTypeObject PyCThostFtdcQryRCAMSInterParameterFieldType;

extern int PyCThostFtdcQryRCAMSInterParameterFieldType_init(PyObject *module);

#endif
