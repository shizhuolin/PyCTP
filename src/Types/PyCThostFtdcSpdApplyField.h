#ifndef PYCTP_TYPES_PYCTHOSTFTDCSPDAPPLYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSPDAPPLYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利申请回报

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSpdApplyField data;
} PyCThostFtdcSpdApplyFieldData;

extern PyTypeObject *PyCThostFtdcSpdApplyFieldType;
extern int PyCTP_module_add_PyCThostFtdcSpdApplyFieldType_exec(PyObject *module);

#endif