#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMFUTUREPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMFUTUREPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySPBMFutureParameterField {
    PyObject_HEAD
    CThostFtdcQrySPBMFutureParameterField data;
} PyCThostFtdcQrySPBMFutureParameterField;

extern PyTypeObject PyCThostFtdcQrySPBMFutureParameterFieldType;

extern int PyCThostFtdcQrySPBMFutureParameterFieldType_init(PyObject *module);

#endif
