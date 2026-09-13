#ifndef PYCTP_TYPES_PYCTHOSTFTDCSMSVERIFYCONFIGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSMSVERIFYCONFIGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///登录验证设置

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSMSVerifyConfigField data;
} PyCThostFtdcSMSVerifyConfigFieldData;

extern PyTypeObject *PyCThostFtdcSMSVerifyConfigFieldType;
extern int PyCTP_module_add_PyCThostFtdcSMSVerifyConfigFieldType_exec(PyObject *module);

#endif