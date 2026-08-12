#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSETTLEMENTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSETTLEMENTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资者结算结果

typedef struct PyCThostFtdcQrySettlementInfoField {
    PyObject_HEAD
    CThostFtdcQrySettlementInfoField data;
} PyCThostFtdcQrySettlementInfoField;

extern PyTypeObject PyCThostFtdcQrySettlementInfoFieldType;

extern int PyCThostFtdcQrySettlementInfoFieldType_init(PyObject *module);

#endif
