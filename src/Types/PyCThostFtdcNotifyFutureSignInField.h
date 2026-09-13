#ifndef PYCTP_TYPES_PYCTHOSTFTDCNOTIFYFUTURESIGNINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCNOTIFYFUTURESIGNINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期商签到通知

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcNotifyFutureSignInField data;
} PyCThostFtdcNotifyFutureSignInFieldData;

extern PyTypeObject *PyCThostFtdcNotifyFutureSignInFieldType;
extern int PyCTP_module_add_PyCThostFtdcNotifyFutureSignInFieldType_exec(PyObject *module);

#endif