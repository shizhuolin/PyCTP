#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINVESTORFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINVESTORFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncingInvestorField {
    PyObject_HEAD
    CThostFtdcSyncingInvestorField data;
} PyCThostFtdcSyncingInvestorField;

extern PyTypeObject PyCThostFtdcSyncingInvestorFieldType;

extern int PyCThostFtdcSyncingInvestorFieldType_init(PyObject *module);

#endif
