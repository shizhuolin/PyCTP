#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRMARGINADJUSTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCOPTIONINSTRMARGINADJUSTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcOptionInstrMarginAdjustField {
    PyObject_HEAD
    CThostFtdcOptionInstrMarginAdjustField data;
} PyCThostFtdcOptionInstrMarginAdjustField;

extern PyTypeObject PyCThostFtdcOptionInstrMarginAdjustFieldType;

extern int PyCThostFtdcOptionInstrMarginAdjustFieldType_init(PyObject *module);

#endif
