#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMINVSTPORTFDEFFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMINVSTPORTFDEFFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平投资者SPBM套餐选择

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaSPBMInvstPortfDefField data;
} PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMInvstPortfDefFieldType_exec(PyObject *module);

#endif