#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSETTLEMENTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSETTLEMENTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSettlementInfoField {
    PyObject_HEAD
    CThostFtdcSettlementInfoField data;
} PyCThostFtdcSettlementInfoField;

extern PyTypeObject PyCThostFtdcSettlementInfoFieldType;

extern int PyCThostFtdcSettlementInfoFieldType_init(PyObject *module);

#endif
