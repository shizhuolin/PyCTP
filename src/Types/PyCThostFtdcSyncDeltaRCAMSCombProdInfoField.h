#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSCOMBPRODINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTARCAMSCOMBPRODINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RCAMS产品组合信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaRCAMSCombProdInfoField data;
} PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_exec(PyObject *module);

#endif