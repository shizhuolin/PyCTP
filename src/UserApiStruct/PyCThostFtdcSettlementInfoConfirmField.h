#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSETTLEMENTINFOCONFIRMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSETTLEMENTINFOCONFIRMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者结算结果确认信息

typedef struct PyCThostFtdcSettlementInfoConfirmField {
    PyObject_HEAD
    CThostFtdcSettlementInfoConfirmField data;
} PyCThostFtdcSettlementInfoConfirmField;

extern PyTypeObject PyCThostFtdcSettlementInfoConfirmFieldType;

extern int PyCThostFtdcSettlementInfoConfirmFieldType_init(PyObject *module);

#endif
