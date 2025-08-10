#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERFUTURETOBANKRSPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERFUTURETOBANKRSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期货资金转银行请求响应

typedef struct PyCThostFtdcTransferFutureToBankRspField {
    PyObject_HEAD
    CThostFtdcTransferFutureToBankRspField data;
} PyCThostFtdcTransferFutureToBankRspField;

extern PyTypeObject PyCThostFtdcTransferFutureToBankRspFieldType;

extern int PyCThostFtdcTransferFutureToBankRspFieldType_init(PyObject *module);

#endif
