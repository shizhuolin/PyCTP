#ifndef PYCTP_TYPES_PYCTHOSTFTDCSUPERUSERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSUPERUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///管理用户

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSuperUserField data;
} PyCThostFtdcSuperUserFieldData;

extern PyTypeObject *PyCThostFtdcSuperUserFieldType;
extern int PyCTP_module_add_PyCThostFtdcSuperUserFieldType_exec(PyObject *module);

#endif