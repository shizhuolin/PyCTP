#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADEROFFERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADEROFFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易员报盘机

typedef struct PyCThostFtdcQryTraderOfferField {
    PyObject_HEAD
    CThostFtdcQryTraderOfferField data;
} PyCThostFtdcQryTraderOfferField;

extern PyTypeObject PyCThostFtdcQryTraderOfferFieldType;

extern int PyCThostFtdcQryTraderOfferFieldType_init(PyObject *module);

#endif
