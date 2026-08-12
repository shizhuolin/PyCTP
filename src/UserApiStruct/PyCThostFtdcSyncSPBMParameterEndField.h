#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCSPBMPARAMETERENDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCSPBMPARAMETERENDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///同步SPBM参数结束

typedef struct PyCThostFtdcSyncSPBMParameterEndField {
    PyObject_HEAD
    CThostFtdcSyncSPBMParameterEndField data;
} PyCThostFtdcSyncSPBMParameterEndField;

extern PyTypeObject PyCThostFtdcSyncSPBMParameterEndFieldType;

extern int PyCThostFtdcSyncSPBMParameterEndFieldType_init(PyObject *module);

#endif
