#ifndef PYCTP_TYPES_PYCTHOSTFTDCNOTIFYFUTURESIGNOUTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCNOTIFYFUTURESIGNOUTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期商签退通知

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcNotifyFutureSignOutField data;
} PyCThostFtdcNotifyFutureSignOutFieldData;

extern PyTypeObject *PyCThostFtdcNotifyFutureSignOutFieldType;
extern int PyCTP_module_add_PyCThostFtdcNotifyFutureSignOutFieldType_exec(PyObject *module);

#endif