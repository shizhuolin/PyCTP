#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPUSERAUTHMETHODFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPUSERAUTHMETHODFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户发出获取安全安全登陆方法回复

typedef struct PyCThostFtdcRspUserAuthMethodField {
    PyObject_HEAD
    CThostFtdcRspUserAuthMethodField data;
} PyCThostFtdcRspUserAuthMethodField;

extern PyTypeObject PyCThostFtdcRspUserAuthMethodFieldType;

extern int PyCThostFtdcRspUserAuthMethodFieldType_init(PyObject *module);

#endif
