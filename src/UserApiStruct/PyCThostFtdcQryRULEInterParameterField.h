#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRULEINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRULEINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryRULEInterParameterField {
    PyObject_HEAD
    CThostFtdcQryRULEInterParameterField data;
} PyCThostFtdcQryRULEInterParameterField;

extern PyTypeObject PyCThostFtdcQryRULEInterParameterFieldType;

extern int PyCThostFtdcQryRULEInterParameterFieldType_init(PyObject *module);

#endif
