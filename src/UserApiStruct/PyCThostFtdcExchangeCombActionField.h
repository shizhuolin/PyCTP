#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGECOMBACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGECOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所申请组合信息

typedef struct PyCThostFtdcExchangeCombActionField {
    PyObject_HEAD
    CThostFtdcExchangeCombActionField data;
} PyCThostFtdcExchangeCombActionField;

extern PyTypeObject PyCThostFtdcExchangeCombActionFieldType;

extern int PyCThostFtdcExchangeCombActionFieldType_init(PyObject *module);

#endif
