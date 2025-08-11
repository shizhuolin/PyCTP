#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSINVESTORCOMBPOSITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSINVESTORCOMBPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRCAMSInvestorCombPositionField {
    PyObject_HEAD
    CThostFtdcRCAMSInvestorCombPositionField data;
} PyCThostFtdcRCAMSInvestorCombPositionField;

extern PyTypeObject PyCThostFtdcRCAMSInvestorCombPositionFieldType;

extern int PyCThostFtdcRCAMSInvestorCombPositionFieldType_init(PyObject *module);

#endif
