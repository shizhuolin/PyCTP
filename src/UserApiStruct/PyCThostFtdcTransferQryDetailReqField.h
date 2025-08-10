#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERQRYDETAILREQFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRANSFERQRYDETAILREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询银行交易明细请求，TradeCode=204999

typedef struct PyCThostFtdcTransferQryDetailReqField {
    PyObject_HEAD
    CThostFtdcTransferQryDetailReqField data;
} PyCThostFtdcTransferQryDetailReqField;

extern PyTypeObject PyCThostFtdcTransferQryDetailReqFieldType;

extern int PyCThostFtdcTransferQryDetailReqFieldType_init(PyObject *module);

#endif
