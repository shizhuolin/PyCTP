#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM品种内对锁仓折扣参数

typedef struct PyCThostFtdcSPBMIntraParameterField {
    PyObject_HEAD
    CThostFtdcSPBMIntraParameterField data;
} PyCThostFtdcSPBMIntraParameterField;

extern PyTypeObject PyCThostFtdcSPBMIntraParameterFieldType;

extern int PyCThostFtdcSPBMIntraParameterFieldType_init(PyObject *module);

#endif
