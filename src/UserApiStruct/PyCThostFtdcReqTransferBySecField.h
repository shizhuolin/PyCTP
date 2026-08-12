#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQTRANSFERBYSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQTRANSFERBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///次中心发起的转帐交易

typedef struct PyCThostFtdcReqTransferBySecField {
    PyObject_HEAD
    CThostFtdcReqTransferBySecField data;
} PyCThostFtdcReqTransferBySecField;

extern PyTypeObject PyCThostFtdcReqTransferBySecFieldType;

extern int PyCThostFtdcReqTransferBySecFieldType_init(PyObject *module);

#endif
