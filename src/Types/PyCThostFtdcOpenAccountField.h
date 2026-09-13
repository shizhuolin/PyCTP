#ifndef PYCTP_TYPES_PYCTHOSTFTDCOPENACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCOPENACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期开户信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcOpenAccountField data;
} PyCThostFtdcOpenAccountFieldData;

extern PyTypeObject *PyCThostFtdcOpenAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcOpenAccountFieldType_exec(PyObject *module);

#endif