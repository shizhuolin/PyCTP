#ifndef PYCTP_TYPES_PYCTHOSTFTDCWECHATUSERSYSTEMINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCWECHATUSERSYSTEMINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///微信小程序等用户系统信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcWechatUserSystemInfoField data;
} PyCThostFtdcWechatUserSystemInfoFieldData;

extern PyTypeObject *PyCThostFtdcWechatUserSystemInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcWechatUserSystemInfoFieldType_exec(PyObject *module);

#endif