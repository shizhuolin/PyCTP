#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入报单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputOrderField data;
} PyCThostFtdcInputOrderFieldData;

extern PyTypeObject *PyCThostFtdcInputOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputOrderFieldType_exec(PyObject *module);

#endif