#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERHEADERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERHEADERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期转帐报文头

typedef struct PyCThostFtdcTransferHeaderField {
    PyObject_HEAD
    CThostFtdcTransferHeaderField data;
} PyCThostFtdcTransferHeaderField;

extern PyTypeObject PyCThostFtdcTransferHeaderFieldType;

extern int PyCThostFtdcTransferHeaderFieldType_init(PyObject *module);

#endif
