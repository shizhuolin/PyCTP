#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERSERIALFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERSERIALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTransferSerialField {
    PyObject_HEAD
    CThostFtdcTransferSerialField data;
} PyCThostFtdcTransferSerialField;

extern PyTypeObject PyCThostFtdcTransferSerialFieldType;

extern int PyCThostFtdcTransferSerialFieldType_init(PyObject *module);

#endif
