#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///数据同步状态

typedef struct PyCThostFtdcSyncStatusField {
    PyObject_HEAD
    CThostFtdcSyncStatusField data;
} PyCThostFtdcSyncStatusField;

extern PyTypeObject PyCThostFtdcSyncStatusFieldType;

extern int PyCThostFtdcSyncStatusFieldType_init(PyObject *module);

#endif
