#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMDTRADEROFFERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMDTRADEROFFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所行情报盘机

typedef struct PyCThostFtdcMDTraderOfferField {
    PyObject_HEAD
    CThostFtdcMDTraderOfferField data;
} PyCThostFtdcMDTraderOfferField;

extern PyTypeObject PyCThostFtdcMDTraderOfferFieldType;

extern int PyCThostFtdcMDTraderOfferFieldType_init(PyObject *module);

#endif
