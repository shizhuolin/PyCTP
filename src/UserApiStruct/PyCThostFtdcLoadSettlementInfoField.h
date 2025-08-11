#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOADSETTLEMENTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCLOADSETTLEMENTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcLoadSettlementInfoField {
    PyObject_HEAD
    CThostFtdcLoadSettlementInfoField data;
} PyCThostFtdcLoadSettlementInfoField;

extern PyTypeObject PyCThostFtdcLoadSettlementInfoFieldType;

extern int PyCThostFtdcLoadSettlementInfoFieldType_init(PyObject *module);

#endif
