#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAEWARRANTOFFSETFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTAEWARRANTOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDeltaEWarrantOffsetField {
    PyObject_HEAD
    CThostFtdcSyncDeltaEWarrantOffsetField data;
} PyCThostFtdcSyncDeltaEWarrantOffsetField;

extern PyTypeObject PyCThostFtdcSyncDeltaEWarrantOffsetFieldType;

extern int PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_init(PyObject *module);

#endif
