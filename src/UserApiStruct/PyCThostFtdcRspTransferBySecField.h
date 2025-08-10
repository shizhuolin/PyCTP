#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPTRANSFERBYSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPTRANSFERBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///次中心发起的转帐交易回报

typedef struct PyCThostFtdcRspTransferBySecField {
    PyObject_HEAD
    CThostFtdcRspTransferBySecField data;
} PyCThostFtdcRspTransferBySecField;

extern PyTypeObject PyCThostFtdcRspTransferBySecFieldType;

extern int PyCThostFtdcRspTransferBySecFieldType_init(PyObject *module);

#endif
