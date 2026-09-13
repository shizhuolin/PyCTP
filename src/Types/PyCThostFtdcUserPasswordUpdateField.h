#ifndef PYCTP_TYPES_PYCTHOSTFTDCUSERPASSWORDUPDATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCUSERPASSWORDUPDATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户口令变更

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcUserPasswordUpdateField data;
} PyCThostFtdcUserPasswordUpdateFieldData;

extern PyTypeObject *PyCThostFtdcUserPasswordUpdateFieldType;
extern int PyCTP_module_add_PyCThostFtdcUserPasswordUpdateFieldType_exec(PyObject *module);

#endif