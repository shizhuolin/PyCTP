#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRISKSETTLEPRODUCTSTATUSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRISKSETTLEPRODUCTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算产品查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRiskSettleProductStatusField data;
} PyCThostFtdcQryRiskSettleProductStatusFieldData;

extern PyTypeObject *PyCThostFtdcQryRiskSettleProductStatusFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRiskSettleProductStatusFieldType_exec(PyObject *module);

#endif