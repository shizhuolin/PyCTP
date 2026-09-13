#ifndef PYCTP_TYPES_PYCTHOSTFTDCPRODUCTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCPRODUCTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///产品

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcProductField data;
} PyCThostFtdcProductFieldData;

extern PyTypeObject *PyCThostFtdcProductFieldType;
extern int PyCTP_module_add_PyCThostFtdcProductFieldType_exec(PyObject *module);

#endif