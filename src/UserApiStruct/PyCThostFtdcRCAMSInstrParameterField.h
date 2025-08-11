#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSINSTRPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRCAMSInstrParameterField {
    PyObject_HEAD
    CThostFtdcRCAMSInstrParameterField data;
} PyCThostFtdcRCAMSInstrParameterField;

extern PyTypeObject PyCThostFtdcRCAMSInstrParameterFieldType;

extern int PyCThostFtdcRCAMSInstrParameterFieldType_init(PyObject *module);

#endif
