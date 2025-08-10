#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRDELTAFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRDELTAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权合约delta值

typedef struct PyCThostFtdcOptionInstrDeltaField {
    PyObject_HEAD
    CThostFtdcOptionInstrDeltaField data;
} PyCThostFtdcOptionInstrDeltaField;

extern PyTypeObject PyCThostFtdcOptionInstrDeltaFieldType;

extern int PyCThostFtdcOptionInstrDeltaFieldType_init(PyObject *module);

#endif
