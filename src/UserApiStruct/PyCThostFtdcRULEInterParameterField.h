#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRULEINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRULEINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRULEInterParameterField {
    PyObject_HEAD
    CThostFtdcRULEInterParameterField data;
} PyCThostFtdcRULEInterParameterField;

extern PyTypeObject PyCThostFtdcRULEInterParameterFieldType;

extern int PyCThostFtdcRULEInterParameterFieldType_init(PyObject *module);

#endif
