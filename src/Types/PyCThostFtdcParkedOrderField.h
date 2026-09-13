#ifndef PYCTP_TYPES_PYCTHOSTFTDCPARKEDORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCPARKEDORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///预埋单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcParkedOrderField data;
} PyCThostFtdcParkedOrderFieldData;

extern PyTypeObject *PyCThostFtdcParkedOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcParkedOrderFieldType_exec(PyObject *module);

#endif