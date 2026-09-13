#ifndef PYCTP_TYPES_PYCTHOSTFTDCPARKEDORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCPARKEDORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入预埋单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcParkedOrderActionField data;
} PyCThostFtdcParkedOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcParkedOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcParkedOrderActionFieldType_exec(PyObject *module);

#endif