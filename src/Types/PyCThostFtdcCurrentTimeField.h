#ifndef PYCTP_TYPES_PYCTHOSTFTDCCURRENTTIMEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCURRENTTIMEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前时间

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCurrentTimeField data;
} PyCThostFtdcCurrentTimeFieldData;

extern PyTypeObject *PyCThostFtdcCurrentTimeFieldType;
extern int PyCTP_module_add_PyCThostFtdcCurrentTimeFieldType_exec(PyObject *module);

#endif