#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSETTLEMENTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSETTLEMENTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySettlementInfoField {
    PyObject_HEAD
    CThostFtdcQrySettlementInfoField data;
} PyCThostFtdcQrySettlementInfoField;

extern PyTypeObject PyCThostFtdcQrySettlementInfoFieldType;

extern int PyCThostFtdcQrySettlementInfoFieldType_init(PyObject *module);

#endif
