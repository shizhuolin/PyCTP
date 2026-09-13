#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSYNCSTATUSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSYNCSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询组合合约分腿

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySyncStatusField data;
} PyCThostFtdcQrySyncStatusFieldData;

extern PyTypeObject *PyCThostFtdcQrySyncStatusFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySyncStatusFieldType_exec(PyObject *module);

#endif