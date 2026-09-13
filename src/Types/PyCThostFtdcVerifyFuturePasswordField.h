#ifndef PYCTP_TYPES_PYCTHOSTFTDCVERIFYFUTUREPASSWORDFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCVERIFYFUTUREPASSWORDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///验证期货资金密码

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcVerifyFuturePasswordField data;
} PyCThostFtdcVerifyFuturePasswordFieldData;

extern PyTypeObject *PyCThostFtdcVerifyFuturePasswordFieldType;
extern int PyCTP_module_add_PyCThostFtdcVerifyFuturePasswordFieldType_exec(PyObject *module);

#endif