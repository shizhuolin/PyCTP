#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMFUTUREPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMFUTUREPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM期货合约保证金参数

typedef struct PyCThostFtdcSPBMFutureParameterField {
    PyObject_HEAD
    CThostFtdcSPBMFutureParameterField data;
} PyCThostFtdcSPBMFutureParameterField;

extern PyTypeObject PyCThostFtdcSPBMFutureParameterFieldType;

extern int PyCThostFtdcSPBMFutureParameterFieldType_init(PyObject *module);

#endif
