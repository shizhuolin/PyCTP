#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQQUERYTRADERESULTBYSERIALFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQQUERYTRADERESULTBYSERIALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqQueryTradeResultBySerialField {
    PyObject_HEAD
    CThostFtdcReqQueryTradeResultBySerialField data;
} PyCThostFtdcReqQueryTradeResultBySerialField;

extern PyTypeObject PyCThostFtdcReqQueryTradeResultBySerialFieldType;

extern int PyCThostFtdcReqQueryTradeResultBySerialFieldType_init(PyObject *module);

#endif
