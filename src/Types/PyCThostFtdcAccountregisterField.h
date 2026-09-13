#ifndef PYCTP_TYPES_PYCTHOSTFTDCACCOUNTREGISTERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCACCOUNTREGISTERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户开销户信息表

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcAccountregisterField data;
} PyCThostFtdcAccountregisterFieldData;

extern PyTypeObject *PyCThostFtdcAccountregisterFieldType;
extern int PyCTP_module_add_PyCThostFtdcAccountregisterFieldType_exec(PyObject *module);

#endif