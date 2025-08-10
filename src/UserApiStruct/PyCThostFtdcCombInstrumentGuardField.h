#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMBINSTRUMENTGUARDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMBINSTRUMENTGUARDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合合约安全系数

typedef struct PyCThostFtdcCombInstrumentGuardField {
    PyObject_HEAD
    CThostFtdcCombInstrumentGuardField data;
} PyCThostFtdcCombInstrumentGuardField;

extern PyTypeObject PyCThostFtdcCombInstrumentGuardFieldType;

extern int PyCThostFtdcCombInstrumentGuardFieldType_init(PyObject *module);

#endif
