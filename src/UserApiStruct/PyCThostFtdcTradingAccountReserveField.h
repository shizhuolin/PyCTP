#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTRESERVEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGACCOUNTRESERVEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTradingAccountReserveField {
    PyObject_HEAD
    CThostFtdcTradingAccountReserveField data;
} PyCThostFtdcTradingAccountReserveField;

extern PyTypeObject PyCThostFtdcTradingAccountReserveFieldType;

extern int PyCThostFtdcTradingAccountReserveFieldType_init(PyObject *module);

#endif
