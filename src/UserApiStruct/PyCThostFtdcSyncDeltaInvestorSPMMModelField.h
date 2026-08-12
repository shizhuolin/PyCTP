#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVESTORSPMMMODELFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINVESTORSPMMMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平投资者SPMM模板选择

typedef struct PyCThostFtdcSyncDeltaInvestorSPMMModelField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInvestorSPMMModelField data;
} PyCThostFtdcSyncDeltaInvestorSPMMModelField;

extern PyTypeObject PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType;

extern int PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_init(PyObject *module);

#endif
