#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPREPEALFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPREPEALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///冲正响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspRepealField data;
} PyCThostFtdcRspRepealFieldData;

extern PyTypeObject *PyCThostFtdcRspRepealFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspRepealFieldType_exec(PyObject *module);

#endif