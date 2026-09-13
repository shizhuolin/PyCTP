#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPGENUSERCAPTCHAFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPGENUSERCAPTCHAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///生成的图片验证码信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspGenUserCaptchaField data;
} PyCThostFtdcRspGenUserCaptchaFieldData;

extern PyTypeObject *PyCThostFtdcRspGenUserCaptchaFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspGenUserCaptchaFieldType_exec(PyObject *module);

#endif