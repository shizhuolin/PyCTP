#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQSYNCKEYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQSYNCKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易核心向银期报盘发出密钥同步请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqSyncKeyField data;
} PyCThostFtdcReqSyncKeyFieldData;

extern PyTypeObject *PyCThostFtdcReqSyncKeyFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqSyncKeyFieldType_exec(PyObject *module);

#endif