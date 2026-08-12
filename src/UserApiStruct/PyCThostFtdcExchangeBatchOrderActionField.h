#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEBATCHORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGEBATCHORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所批量报单操作

typedef struct PyCThostFtdcExchangeBatchOrderActionField {
    PyObject_HEAD
    CThostFtdcExchangeBatchOrderActionField data;
} PyCThostFtdcExchangeBatchOrderActionField;

extern PyTypeObject PyCThostFtdcExchangeBatchOrderActionFieldType;

extern int PyCThostFtdcExchangeBatchOrderActionFieldType_init(PyObject *module);

#endif
