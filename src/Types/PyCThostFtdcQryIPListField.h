#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYIPLISTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYIPLISTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询IP列表

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryIPListField data;
} PyCThostFtdcQryIPListFieldData;

extern PyTypeObject *PyCThostFtdcQryIPListFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryIPListFieldType_exec(PyObject *module);

#endif