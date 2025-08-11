#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGECOMBACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYEXCHANGECOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryExchangeCombActionField {
    PyObject_HEAD
    CThostFtdcQryExchangeCombActionField data;
} PyCThostFtdcQryExchangeCombActionField;

extern PyTypeObject PyCThostFtdcQryExchangeCombActionFieldType;

extern int PyCThostFtdcQryExchangeCombActionFieldType_init(PyObject *module);

#endif
