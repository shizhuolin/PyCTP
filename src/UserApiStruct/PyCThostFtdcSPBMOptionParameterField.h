#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMOPTIONPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMOPTIONPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSPBMOptionParameterField {
    PyObject_HEAD
    CThostFtdcSPBMOptionParameterField data;
} PyCThostFtdcSPBMOptionParameterField;

extern PyTypeObject PyCThostFtdcSPBMOptionParameterFieldType;

extern int PyCThostFtdcSPBMOptionParameterFieldType_init(PyObject *module);

#endif
