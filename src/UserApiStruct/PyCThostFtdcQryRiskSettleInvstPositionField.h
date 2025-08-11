#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRISKSETTLEINVSTPOSITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRISKSETTLEINVSTPOSITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryRiskSettleInvstPositionField {
    PyObject_HEAD
    CThostFtdcQryRiskSettleInvstPositionField data;
} PyCThostFtdcQryRiskSettleInvstPositionField;

extern PyTypeObject PyCThostFtdcQryRiskSettleInvstPositionFieldType;

extern int PyCThostFtdcQryRiskSettleInvstPositionFieldType_init(PyObject *module);

#endif
