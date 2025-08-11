#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVESTORSPMMMODELFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVESTORSPMMMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaInvestorSPMMModelField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvestorSPMMModelField data;
} PyCThostFtdcSyncDeltaInvestorSPMMModelField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType;

extern int PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_init(PyObject *module);

#endif
