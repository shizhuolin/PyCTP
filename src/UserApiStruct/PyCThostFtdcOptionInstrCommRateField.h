#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcOptionInstrCommRateField {
    PyObject_HEAD
    CThostFtdcOptionInstrCommRateField data;
} PyCThostFtdcOptionInstrCommRateField;

extern PyTypeObject PyCThostFtdcOptionInstrCommRateFieldType;

extern int PyCThostFtdcOptionInstrCommRateFieldType_init(PyObject *module);

#endif
