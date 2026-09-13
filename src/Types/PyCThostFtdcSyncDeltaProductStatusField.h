#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAPRODUCTSTATUSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAPRODUCTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平产品信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaProductStatusField data;
} PyCThostFtdcSyncDeltaProductStatusFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaProductStatusFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaProductStatusFieldType_exec(PyObject *module);

#endif