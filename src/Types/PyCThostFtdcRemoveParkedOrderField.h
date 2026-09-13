#ifndef PYCTP_TYPES_PYCTHOSTFTDCREMOVEPARKEDORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREMOVEPARKEDORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///删除预埋单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRemoveParkedOrderField data;
} PyCThostFtdcRemoveParkedOrderFieldData;

extern PyTypeObject *PyCThostFtdcRemoveParkedOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcRemoveParkedOrderFieldType_exec(PyObject *module);

#endif