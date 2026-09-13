#ifndef PYCTP_TYPES_PYCTHOSTFTDCVERIFYINVESTORPASSWORDFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCVERIFYINVESTORPASSWORDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///校验投资者密码

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcVerifyInvestorPasswordField data;
} PyCThostFtdcVerifyInvestorPasswordFieldData;

extern PyTypeObject *PyCThostFtdcVerifyInvestorPasswordFieldType;
extern int PyCTP_module_add_PyCThostFtdcVerifyInvestorPasswordFieldType_exec(PyObject *module);

#endif