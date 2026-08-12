#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONINSTRCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONINSTRCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权手续费率查询

typedef struct PyCThostFtdcQryOptionInstrCommRateField {
    PyObject_HEAD
    CThostFtdcQryOptionInstrCommRateField data;
} PyCThostFtdcQryOptionInstrCommRateField;

extern PyTypeObject PyCThostFtdcQryOptionInstrCommRateFieldType;

extern int PyCThostFtdcQryOptionInstrCommRateFieldType_init(PyObject *module);

#endif
