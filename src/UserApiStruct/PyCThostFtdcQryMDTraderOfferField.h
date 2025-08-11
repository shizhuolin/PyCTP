#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMDTRADEROFFERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMDTRADEROFFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryMDTraderOfferField {
    PyObject_HEAD
    CThostFtdcQryMDTraderOfferField data;
} PyCThostFtdcQryMDTraderOfferField;

extern PyTypeObject PyCThostFtdcQryMDTraderOfferFieldType;

extern int PyCThostFtdcQryMDTraderOfferFieldType_init(PyObject *module);

#endif
