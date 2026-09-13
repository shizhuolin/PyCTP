#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQUSERLOGINWITHOTPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQUSERLOGINWITHOTPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户发出带动态验证码的登录请求请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqUserLoginWithOTPField data;
} PyCThostFtdcReqUserLoginWithOTPFieldData;

extern PyTypeObject *PyCThostFtdcReqUserLoginWithOTPFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqUserLoginWithOTPFieldType_exec(PyObject *module);

#endif