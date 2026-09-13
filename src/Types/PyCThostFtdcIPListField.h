#ifndef PYCTP_TYPES_PYCTHOSTFTDCIPLISTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCIPLISTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///IP列表

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcIPListField data;
} PyCThostFtdcIPListFieldData;

extern PyTypeObject *PyCThostFtdcIPListFieldType;
extern int PyCTP_module_add_PyCThostFtdcIPListFieldType_exec(PyObject *module);

#endif