#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSETTLEMENTREFFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSETTLEMENTREFFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///结算引用

typedef struct PyCThostFtdcSettlementRefField {
    PyObject_HEAD
    CThostFtdcSettlementRefField data;
} PyCThostFtdcSettlementRefField;

extern PyTypeObject PyCThostFtdcSettlementRefFieldType;

extern int PyCThostFtdcSettlementRefFieldType_init(PyObject *module);

#endif
