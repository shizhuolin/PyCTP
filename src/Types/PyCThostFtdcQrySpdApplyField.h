#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSPDAPPLYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSPDAPPLYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利套保申请查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySpdApplyField data;
} PyCThostFtdcQrySpdApplyFieldData;

extern PyTypeObject *PyCThostFtdcQrySpdApplyFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySpdApplyFieldType_exec(PyObject *module);

#endif