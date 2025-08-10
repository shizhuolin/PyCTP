#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINVESTORPOSITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINVESTORPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的投资者持仓

typedef struct PyCThostFtdcSyncingInvestorPositionField {
    PyObject_HEAD
    CThostFtdcSyncingInvestorPositionField data;
} PyCThostFtdcSyncingInvestorPositionField;

extern PyTypeObject PyCThostFtdcSyncingInvestorPositionFieldType;

extern int PyCThostFtdcSyncingInvestorPositionFieldType_init(PyObject *module);

#endif
