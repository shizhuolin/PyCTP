#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCSTATUSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///数据同步状态

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncStatusField data;
} PyCThostFtdcSyncStatusFieldData;

extern PyTypeObject *PyCThostFtdcSyncStatusFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncStatusFieldType_exec(PyObject *module);

#endif