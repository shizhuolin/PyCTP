#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMMOPTIONINSTRCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMMOPTIONINSTRCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前做市商期权合约手续费的详细内容

typedef struct PyCThostFtdcMMOptionInstrCommRateField {
    PyObject_HEAD
    CThostFtdcMMOptionInstrCommRateField data;
} PyCThostFtdcMMOptionInstrCommRateField;

extern PyTypeObject PyCThostFtdcMMOptionInstrCommRateFieldType;

extern int PyCThostFtdcMMOptionInstrCommRateFieldType_init(PyObject *module);

#endif
