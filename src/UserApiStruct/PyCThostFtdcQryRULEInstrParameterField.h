#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRULEINSTRPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRULEINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE合约保证金参数查询

typedef struct PyCThostFtdcQryRULEInstrParameterField {
    PyObject_HEAD
    CThostFtdcQryRULEInstrParameterField data;
} PyCThostFtdcQryRULEInstrParameterField;

extern PyTypeObject PyCThostFtdcQryRULEInstrParameterFieldType;

extern int PyCThostFtdcQryRULEInstrParameterFieldType_init(PyObject *module);

#endif
