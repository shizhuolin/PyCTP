#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMINVSTPORTFDEFFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMINVSTPORTFDEFFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平投资者SPBM套餐选择

typedef struct PyCThostFtdcSyncDeltaSPBMInvstPortfDefField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPBMInvstPortfDefField data;
} PyCThostFtdcSyncDeltaSPBMInvstPortfDefField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType;

extern int PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_init(PyObject *module);

#endif
