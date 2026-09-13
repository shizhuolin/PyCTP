#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINDEXPRICEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINDEXPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平现货指数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaIndexPriceField data;
} PyCThostFtdcSyncDeltaIndexPriceFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaIndexPriceFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaIndexPriceFieldType_exec(PyObject *module);

#endif