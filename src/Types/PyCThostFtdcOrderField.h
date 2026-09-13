#ifndef PYCTP_TYPES_PYCTHOSTFTDCORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcOrderField data;
} PyCThostFtdcOrderFieldData;

extern PyTypeObject *PyCThostFtdcOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcOrderFieldType_exec(PyObject *module);

#endif