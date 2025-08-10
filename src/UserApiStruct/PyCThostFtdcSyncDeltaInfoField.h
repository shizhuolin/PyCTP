#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平信息

typedef struct PyCThostFtdcSyncDeltaInfoField {
    PyObject_HEAD
    CThostFtdcSyncDeltaInfoField data;
} PyCThostFtdcSyncDeltaInfoField;

extern PyTypeObject PyCThostFtdcSyncDeltaInfoFieldType;

extern int PyCThostFtdcSyncDeltaInfoFieldType_init(PyObject *module);

#endif
