#ifndef PYCTP_TYPES_PYCTHOSTFTDCNOTIFYSYNCKEYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCNOTIFYSYNCKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易核心向银期报盘发出密钥同步处理结果的通知

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcNotifySyncKeyField data;
} PyCThostFtdcNotifySyncKeyFieldData;

extern PyTypeObject *PyCThostFtdcNotifySyncKeyFieldType;
extern int PyCTP_module_add_PyCThostFtdcNotifySyncKeyFieldType_exec(PyObject *module);

#endif