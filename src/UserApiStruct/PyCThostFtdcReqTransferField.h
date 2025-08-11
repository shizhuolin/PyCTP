#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQTRANSFERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQTRANSFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqTransferField {
    PyObject_HEAD
    CThostFtdcReqTransferField data;
} PyCThostFtdcReqTransferField;

extern PyTypeObject PyCThostFtdcReqTransferFieldType;

extern int PyCThostFtdcReqTransferFieldType_init(PyObject *module);

#endif
