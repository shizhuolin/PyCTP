#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINVESTORSPMMMODELFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINVESTORSPMMMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平投资者SPMM模板选择

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaInvestorSPMMModelField data;
} PyCThostFtdcSyncDeltaInvestorSPMMModelFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaInvestorSPMMModelFieldType_exec(PyObject *module);

#endif