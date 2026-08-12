#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPQUERYTRADERESULTBYSERIALFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPQUERYTRADERESULTBYSERIALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询指定流水号的交易结果响应

typedef struct PyCThostFtdcRspQueryTradeResultBySerialField {
    PyObject_HEAD
    CThostFtdcRspQueryTradeResultBySerialField data;
} PyCThostFtdcRspQueryTradeResultBySerialField;

extern PyTypeObject PyCThostFtdcRspQueryTradeResultBySerialFieldType;

extern int PyCThostFtdcRspQueryTradeResultBySerialFieldType_init(PyObject *module);

#endif
