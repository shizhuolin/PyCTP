#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入报单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputOrderActionField data;
} PyCThostFtdcInputOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcInputOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputOrderActionFieldType_exec(PyObject *module);

#endif