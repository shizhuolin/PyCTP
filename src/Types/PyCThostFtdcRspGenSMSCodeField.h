#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPGENSMSCODEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPGENSMSCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///申请短信验证码响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspGenSMSCodeField data;
} PyCThostFtdcRspGenSMSCodeFieldData;

extern PyTypeObject *PyCThostFtdcRspGenSMSCodeFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspGenSMSCodeFieldType_exec(PyObject *module);

#endif