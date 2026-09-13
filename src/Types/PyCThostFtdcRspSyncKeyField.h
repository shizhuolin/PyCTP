#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPSYNCKEYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPSYNCKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易核心向银期报盘发出密钥同步响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspSyncKeyField data;
} PyCThostFtdcRspSyncKeyFieldData;

extern PyTypeObject *PyCThostFtdcRspSyncKeyFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspSyncKeyFieldType_exec(PyObject *module);

#endif