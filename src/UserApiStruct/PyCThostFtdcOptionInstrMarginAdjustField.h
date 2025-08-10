#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRMARGINADJUSTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRMARGINADJUSTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前期权合约保证金调整系数

typedef struct PyCThostFtdcOptionInstrMarginAdjustField {
    PyObject_HEAD
    CThostFtdcOptionInstrMarginAdjustField data;
} PyCThostFtdcOptionInstrMarginAdjustField;

extern PyTypeObject PyCThostFtdcOptionInstrMarginAdjustFieldType;

extern int PyCThostFtdcOptionInstrMarginAdjustFieldType_init(PyObject *module);

#endif
