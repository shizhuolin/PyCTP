#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPQUERYTRADERESULTBYSERIALFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPQUERYTRADERESULTBYSERIALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspQueryTradeResultBySerialField {
    PyObject_HEAD
    CThostFtdcRspQueryTradeResultBySerialField data;
} PyCThostFtdcRspQueryTradeResultBySerialField;

extern PyTypeObject PyCThostFtdcRspQueryTradeResultBySerialFieldType;

extern int PyCThostFtdcRspQueryTradeResultBySerialFieldType_init(PyObject *module);

#endif
