#ifndef PYCTP_TYPES_PYCTHOSTFTDCUSERPASSWORDUPDATEFROMSECFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCUSERPASSWORDUPDATEFROMSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///来自次席的用户口令变更

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcUserPasswordUpdateFromSecField data;
} PyCThostFtdcUserPasswordUpdateFromSecFieldData;

extern PyTypeObject *PyCThostFtdcUserPasswordUpdateFromSecFieldType;
extern int PyCTP_module_add_PyCThostFtdcUserPasswordUpdateFromSecFieldType_exec(PyObject *module);

#endif