#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQGENSMSCODEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQGENSMSCODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///申请短信验证码请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqGenSMSCodeField data;
} PyCThostFtdcReqGenSMSCodeFieldData;

extern PyTypeObject *PyCThostFtdcReqGenSMSCodeFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqGenSMSCodeFieldType_exec(PyObject *module);

#endif