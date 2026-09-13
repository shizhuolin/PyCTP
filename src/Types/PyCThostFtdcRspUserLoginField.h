#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPUSERLOGINFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPUSERLOGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户登录应答

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspUserLoginField data;
} PyCThostFtdcRspUserLoginFieldData;

extern PyTypeObject *PyCThostFtdcRspUserLoginFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspUserLoginFieldType_exec(PyObject *module);

#endif