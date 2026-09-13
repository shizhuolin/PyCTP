#ifndef PYCTP_TYPES_PYCTHOSTFTDCSMSVERIFYINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSMSVERIFYINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///短信验证信息通知

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSMSVerifyInfoField data;
} PyCThostFtdcSMSVerifyInfoFieldData;

extern PyTypeObject *PyCThostFtdcSMSVerifyInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcSMSVerifyInfoFieldType_exec(PyObject *module);

#endif