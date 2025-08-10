#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPSYNCKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPSYNCKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易核心向银期报盘发出密钥同步响应

typedef struct PyCThostFtdcRspSyncKeyField {
    PyObject_HEAD
    CThostFtdcRspSyncKeyField data;
} PyCThostFtdcRspSyncKeyField;

extern PyTypeObject PyCThostFtdcRspSyncKeyFieldType;

extern int PyCThostFtdcRspSyncKeyFieldType_init(PyObject *module);

#endif
