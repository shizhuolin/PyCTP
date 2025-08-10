#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRULEINSTRPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRULEINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE合约保证金参数

typedef struct PyCThostFtdcRULEInstrParameterField {
    PyObject_HEAD
    CThostFtdcRULEInstrParameterField data;
} PyCThostFtdcRULEInstrParameterField;

extern PyTypeObject PyCThostFtdcRULEInstrParameterFieldType;

extern int PyCThostFtdcRULEInstrParameterFieldType_init(PyObject *module);

#endif
