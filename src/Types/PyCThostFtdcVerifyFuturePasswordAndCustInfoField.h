#ifndef PYCTP_TYPES_PYCTHOSTFTDCVERIFYFUTUREPASSWORDANDCUSTINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCVERIFYFUTUREPASSWORDANDCUSTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///验证期货资金密码和客户信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcVerifyFuturePasswordAndCustInfoField data;
} PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldData;

extern PyTypeObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_exec(PyObject *module);

#endif