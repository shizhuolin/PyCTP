#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSCOMBPRODINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSCOMBPRODINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS产品组合信息

typedef struct PyCThostFtdcSyncDeltaRCAMSCombProdInfoField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSCombProdInfoField data;
} PyCThostFtdcSyncDeltaRCAMSCombProdInfoField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_init(PyObject *module);

#endif
