#ifndef PYCTP_TYPES_PYCTHOSTFTDCCURRTRANSFERIDENTITYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCURRTRANSFERIDENTITYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前银期所属交易中心

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCurrTransferIdentityField data;
} PyCThostFtdcCurrTransferIdentityFieldData;

extern PyTypeObject *PyCThostFtdcCurrTransferIdentityFieldType;
extern int PyCTP_module_add_PyCThostFtdcCurrTransferIdentityFieldType_exec(PyObject *module);

#endif