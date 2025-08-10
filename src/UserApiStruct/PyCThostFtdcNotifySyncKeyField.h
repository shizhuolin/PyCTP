#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYSYNCKEYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYSYNCKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易核心向银期报盘发出密钥同步处理结果的通知

typedef struct PyCThostFtdcNotifySyncKeyField {
    PyObject_HEAD
    CThostFtdcNotifySyncKeyField data;
} PyCThostFtdcNotifySyncKeyField;

extern PyTypeObject PyCThostFtdcNotifySyncKeyFieldType;

extern int PyCThostFtdcNotifySyncKeyFieldType_init(PyObject *module);

#endif
