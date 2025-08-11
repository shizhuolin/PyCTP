#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADEROFFERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADEROFFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTraderOfferField {
    PyObject_HEAD
    CThostFtdcTraderOfferField data;
} PyCThostFtdcTraderOfferField;

extern PyTypeObject PyCThostFtdcTraderOfferFieldType;

extern int PyCThostFtdcTraderOfferFieldType_init(PyObject *module);

#endif
