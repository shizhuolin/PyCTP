#ifndef PYCTP_TYPES_PYCTHOSTFTDCCOMBACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///申请组合

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCombActionField data;
} PyCThostFtdcCombActionFieldData;

extern PyTypeObject *PyCThostFtdcCombActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcCombActionFieldType_exec(PyObject *module);

#endif