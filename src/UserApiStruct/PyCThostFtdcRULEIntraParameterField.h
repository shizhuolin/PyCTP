#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRULEINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRULEINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRULEIntraParameterField {
    PyObject_HEAD
    CThostFtdcRULEIntraParameterField data;
} PyCThostFtdcRULEIntraParameterField;

extern PyTypeObject PyCThostFtdcRULEIntraParameterFieldType;

extern int PyCThostFtdcRULEIntraParameterFieldType_init(PyObject *module);

#endif
