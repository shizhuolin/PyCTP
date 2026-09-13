#ifndef PYCTP_TYPES_PYCTHOSTFTDCLOGININFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCLOGININFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///登录信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcLoginInfoField data;
} PyCThostFtdcLoginInfoFieldData;

extern PyTypeObject *PyCThostFtdcLoginInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcLoginInfoFieldType_exec(PyObject *module);

#endif