#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONINSTRCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONINSTRCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryOptionInstrCommRateField {
    PyObject_HEAD
    CThostFtdcQryOptionInstrCommRateField data;
} PyCThostFtdcQryOptionInstrCommRateField;

extern PyTypeObject PyCThostFtdcQryOptionInstrCommRateFieldType;

extern int PyCThostFtdcQryOptionInstrCommRateFieldType_init(PyObject *module);

#endif
