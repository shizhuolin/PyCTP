#ifndef PYCTP_TYPES_PYCTHOSTFTDCUSERIPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCUSERIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户IP

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcUserIPField data;
} PyCThostFtdcUserIPFieldData;

extern PyTypeObject *PyCThostFtdcUserIPFieldType;
extern int PyCTP_module_add_PyCThostFtdcUserIPFieldType_exec(PyObject *module);

#endif