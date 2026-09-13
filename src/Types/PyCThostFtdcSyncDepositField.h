#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDEPOSITFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDEPOSITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///出入金同步

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDepositField data;
} PyCThostFtdcSyncDepositFieldData;

extern PyTypeObject *PyCThostFtdcSyncDepositFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDepositFieldType_exec(PyObject *module);

#endif