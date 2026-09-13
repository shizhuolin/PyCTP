#ifndef PYCTP_TYPES_PYCTHOSTFTDCRISKSETTLEPRODUCTSTATUSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRISKSETTLEPRODUCTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险品种

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRiskSettleProductStatusField data;
} PyCThostFtdcRiskSettleProductStatusFieldData;

extern PyTypeObject *PyCThostFtdcRiskSettleProductStatusFieldType;
extern int PyCTP_module_add_PyCThostFtdcRiskSettleProductStatusFieldType_exec(PyObject *module);

#endif