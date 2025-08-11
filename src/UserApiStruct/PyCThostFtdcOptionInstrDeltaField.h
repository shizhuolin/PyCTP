#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRDELTAFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRDELTAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcOptionInstrDeltaField {
    PyObject_HEAD
    CThostFtdcOptionInstrDeltaField data;
} PyCThostFtdcOptionInstrDeltaField;

extern PyTypeObject PyCThostFtdcOptionInstrDeltaFieldType;

extern int PyCThostFtdcOptionInstrDeltaFieldType_init(PyObject *module);

#endif
