#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPTRANSFERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPTRANSFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspTransferField {
    PyObject_HEAD
    CThostFtdcRspTransferField data;
} PyCThostFtdcRspTransferField;

extern PyTypeObject PyCThostFtdcRspTransferFieldType;

extern int PyCThostFtdcRspTransferFieldType_init(PyObject *module);

#endif
