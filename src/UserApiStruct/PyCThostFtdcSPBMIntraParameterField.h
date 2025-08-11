#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSPBMIntraParameterField {
    PyObject_HEAD
    CThostFtdcSPBMIntraParameterField data;
} PyCThostFtdcSPBMIntraParameterField;

extern PyTypeObject PyCThostFtdcSPBMIntraParameterFieldType;

extern int PyCThostFtdcSPBMIntraParameterFieldType_init(PyObject *module);

#endif
