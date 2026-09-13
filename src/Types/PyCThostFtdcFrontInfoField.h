#ifndef PYCTP_TYPES_PYCTHOSTFTDCFRONTINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCFRONTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///前置信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcFrontInfoField data;
} PyCThostFtdcFrontInfoFieldData;

extern PyTypeObject *PyCThostFtdcFrontInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcFrontInfoFieldType_exec(PyObject *module);

#endif