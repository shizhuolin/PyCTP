#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPUSERAUTHMETHODFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPUSERAUTHMETHODFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户发出获取安全安全登陆方法回复

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspUserAuthMethodField data;
} PyCThostFtdcRspUserAuthMethodFieldData;

extern PyTypeObject *PyCThostFtdcRspUserAuthMethodFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspUserAuthMethodFieldType_exec(PyObject *module);

#endif