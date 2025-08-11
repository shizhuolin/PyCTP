#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDEPOSITFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDEPOSITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncDepositField {
    PyObject_HEAD
    CThostFtdcSyncDepositField data;
} PyCThostFtdcSyncDepositField;

extern PyTypeObject PyCThostFtdcSyncDepositFieldType;

extern int PyCThostFtdcSyncDepositFieldType_init(PyObject *module);

#endif
