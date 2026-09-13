#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINITINVSTMARGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTAINITINVSTMARGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者风险结算总保证金

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaInitInvstMarginField data;
} PyCThostFtdcSyncDeltaInitInvstMarginFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaInitInvstMarginFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaInitInvstMarginFieldType_exec(PyObject *module);

#endif