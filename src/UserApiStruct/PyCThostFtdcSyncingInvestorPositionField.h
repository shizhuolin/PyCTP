#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINVESTORPOSITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINVESTORPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncingInvestorPositionField {
    PyObject_HEAD
    CThostFtdcSyncingInvestorPositionField data;
} PyCThostFtdcSyncingInvestorPositionField;

extern PyTypeObject PyCThostFtdcSyncingInvestorPositionFieldType;

extern int PyCThostFtdcSyncingInvestorPositionFieldType_init(PyObject *module);

#endif
