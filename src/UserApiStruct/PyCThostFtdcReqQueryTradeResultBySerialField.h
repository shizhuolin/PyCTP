#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQQUERYTRADERESULTBYSERIALFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQQUERYTRADERESULTBYSERIALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询指定流水号的交易结果请求

typedef struct PyCThostFtdcReqQueryTradeResultBySerialField {
    PyObject_HEAD
    CThostFtdcReqQueryTradeResultBySerialField data;
} PyCThostFtdcReqQueryTradeResultBySerialField;

extern PyTypeObject PyCThostFtdcReqQueryTradeResultBySerialFieldType;

extern int PyCThostFtdcReqQueryTradeResultBySerialFieldType_init(PyObject *module);

#endif
