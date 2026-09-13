#ifndef PYCTP_TYPES_PYCTHOSTFTDCCOMBLEGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCOMBLEGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合腿信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCombLegField data;
} PyCThostFtdcCombLegFieldData;

extern PyTypeObject *PyCThostFtdcCombLegFieldType;
extern int PyCTP_module_add_PyCThostFtdcCombLegFieldType_exec(PyObject *module);

#endif