#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMMOPTIONINSTRCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMMOPTIONINSTRCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryMMOptionInstrCommRateField {
    PyObject_HEAD
    CThostFtdcQryMMOptionInstrCommRateField data;
} PyCThostFtdcQryMMOptionInstrCommRateField;

extern PyTypeObject PyCThostFtdcQryMMOptionInstrCommRateFieldType;

extern int PyCThostFtdcQryMMOptionInstrCommRateFieldType_init(PyObject *module);

#endif
