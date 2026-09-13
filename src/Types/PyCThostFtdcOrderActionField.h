#ifndef PYCTP_TYPES_PYCTHOSTFTDCORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcOrderActionField data;
} PyCThostFtdcOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcOrderActionFieldType_exec(PyObject *module);

#endif