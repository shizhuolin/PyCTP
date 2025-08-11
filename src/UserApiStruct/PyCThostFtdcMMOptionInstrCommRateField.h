#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMMOPTIONINSTRCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMMOPTIONINSTRCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcMMOptionInstrCommRateField {
    PyObject_HEAD
    CThostFtdcMMOptionInstrCommRateField data;
} PyCThostFtdcMMOptionInstrCommRateField;

extern PyTypeObject PyCThostFtdcMMOptionInstrCommRateFieldType;

extern int PyCThostFtdcMMOptionInstrCommRateFieldType_init(PyObject *module);

#endif
