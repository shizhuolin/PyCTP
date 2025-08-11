#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSCOMBPRODINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARCAMSCOMBPRODINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaRCAMSCombProdInfoField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRCAMSCombProdInfoField data;
} PyCThostFtdcSyncDeltaRCAMSCombProdInfoField;

extern PyTypeObject PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType;

extern int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_init(PyObject *module);

#endif
