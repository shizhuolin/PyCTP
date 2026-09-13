#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaInfoField data;
} PyCThostFtdcSyncDeltaInfoFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaInfoFieldType_exec(PyObject *module);

#endif