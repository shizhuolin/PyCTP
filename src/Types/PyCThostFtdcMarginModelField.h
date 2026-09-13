#ifndef PYCTP_TYPES_PYCTHOSTFTDCMARGINMODELFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMARGINMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者保证金率模板

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMarginModelField data;
} PyCThostFtdcMarginModelFieldData;

extern PyTypeObject *PyCThostFtdcMarginModelFieldType;
extern int PyCTP_module_add_PyCThostFtdcMarginModelFieldType_exec(PyObject *module);

#endif