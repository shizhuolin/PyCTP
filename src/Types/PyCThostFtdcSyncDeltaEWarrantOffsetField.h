#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAEWARRANTOFFSETFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAEWARRANTOFFSETFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平仓单折抵

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaEWarrantOffsetField data;
} PyCThostFtdcSyncDeltaEWarrantOffsetFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaEWarrantOffsetFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaEWarrantOffsetFieldType_exec(PyObject *module);

#endif