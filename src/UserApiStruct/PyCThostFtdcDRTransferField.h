#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDRTRANSFERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCDRTRANSFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///灾备交易转换报文

typedef struct PyCThostFtdcDRTransferField {
    PyObject_HEAD
    CThostFtdcDRTransferField data;
} PyCThostFtdcDRTransferField;

extern PyTypeObject PyCThostFtdcDRTransferFieldType;

extern int PyCThostFtdcDRTransferFieldType_init(PyObject *module);

#endif
