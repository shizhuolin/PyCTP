#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINVESTORGROUPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCINGINVESTORGROUPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSyncingInvestorGroupField {
    PyObject_HEAD
    CThostFtdcSyncingInvestorGroupField data;
} PyCThostFtdcSyncingInvestorGroupField;

extern PyTypeObject PyCThostFtdcSyncingInvestorGroupFieldType;

extern int PyCThostFtdcSyncingInvestorGroupFieldType_init(PyObject *module);

#endif
