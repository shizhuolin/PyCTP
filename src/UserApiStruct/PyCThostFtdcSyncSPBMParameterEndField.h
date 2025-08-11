#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCSPBMPARAMETERENDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCSPBMPARAMETERENDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncSPBMParameterEndField {
    PyObject_HEAD
    CThostFtdcSyncSPBMParameterEndField data;
} PyCThostFtdcSyncSPBMParameterEndField;

extern PyTypeObject PyCThostFtdcSyncSPBMParameterEndFieldType;

extern int PyCThostFtdcSyncSPBMParameterEndFieldType_init(PyObject *module);

#endif
