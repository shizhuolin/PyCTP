#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSETTLEMENTINFOCONFIRMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSETTLEMENTINFOCONFIRMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询结算信息确认域

typedef struct PyCThostFtdcQrySettlementInfoConfirmField {
    PyObject_HEAD
    CThostFtdcQrySettlementInfoConfirmField data;
} PyCThostFtdcQrySettlementInfoConfirmField;

extern PyTypeObject PyCThostFtdcQrySettlementInfoConfirmFieldType;

extern int PyCThostFtdcQrySettlementInfoConfirmFieldType_init(PyObject *module);

#endif
