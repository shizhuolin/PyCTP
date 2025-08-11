#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAOPTEXCHMARGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAOPTEXCHMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaOptExchMarginField {
    PyObject_HEAD
    CThostFtdcSyncDeltaOptExchMarginField data;
} PyCThostFtdcSyncDeltaOptExchMarginField;

extern PyTypeObject PyCThostFtdcSyncDeltaOptExchMarginFieldType;

extern int PyCThostFtdcSyncDeltaOptExchMarginFieldType_init(PyObject *module);

#endif
