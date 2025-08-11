#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERFUTURETOBANKRSPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERFUTURETOBANKRSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTransferFutureToBankRspField {
    PyObject_HEAD
    CThostFtdcTransferFutureToBankRspField data;
} PyCThostFtdcTransferFutureToBankRspField;

extern PyTypeObject PyCThostFtdcTransferFutureToBankRspFieldType;

extern int PyCThostFtdcTransferFutureToBankRspFieldType_init(PyObject *module);

#endif
