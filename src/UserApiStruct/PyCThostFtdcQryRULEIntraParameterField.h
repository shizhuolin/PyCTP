#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRULEINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRULEINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryRULEIntraParameterField {
    PyObject_HEAD
    CThostFtdcQryRULEIntraParameterField data;
} PyCThostFtdcQryRULEIntraParameterField;

extern PyTypeObject PyCThostFtdcQryRULEIntraParameterFieldType;

extern int PyCThostFtdcQryRULEIntraParameterFieldType_init(PyObject *module);

#endif
