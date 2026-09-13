#ifndef PYCTP_TYPES_PYCTHOSTFTDCCANCELACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCANCELACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期销户信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCancelAccountField data;
} PyCThostFtdcCancelAccountFieldData;

extern PyTypeObject *PyCThostFtdcCancelAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcCancelAccountFieldType_exec(PyObject *module);

#endif