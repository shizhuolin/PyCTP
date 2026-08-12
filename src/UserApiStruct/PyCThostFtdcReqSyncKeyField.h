#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQSYNCKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQSYNCKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易核心向银期报盘发出密钥同步请求

typedef struct PyCThostFtdcReqSyncKeyField {
    PyObject_HEAD
    CThostFtdcReqSyncKeyField data;
} PyCThostFtdcReqSyncKeyField;

extern PyTypeObject PyCThostFtdcReqSyncKeyFieldType;

extern int PyCThostFtdcReqSyncKeyFieldType_init(PyObject *module);

#endif
