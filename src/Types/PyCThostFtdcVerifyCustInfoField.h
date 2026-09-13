#ifndef PYCTP_TYPES_PYCTHOSTFTDCVERIFYCUSTINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCVERIFYCUSTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///验证客户信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcVerifyCustInfoField data;
} PyCThostFtdcVerifyCustInfoFieldData;

extern PyTypeObject *PyCThostFtdcVerifyCustInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcVerifyCustInfoFieldType_exec(PyObject *module);

#endif