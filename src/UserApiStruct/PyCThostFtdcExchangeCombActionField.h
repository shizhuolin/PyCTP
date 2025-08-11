#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGECOMBACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXCHANGECOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcExchangeCombActionField {
    PyObject_HEAD
    CThostFtdcExchangeCombActionField data;
} PyCThostFtdcExchangeCombActionField;

extern PyTypeObject PyCThostFtdcExchangeCombActionFieldType;

extern int PyCThostFtdcExchangeCombActionFieldType_init(PyObject *module);

#endif
