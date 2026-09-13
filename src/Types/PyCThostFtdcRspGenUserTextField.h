#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPGENUSERTEXTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPGENUSERTEXTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///短信验证码生成的回复

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspGenUserTextField data;
} PyCThostFtdcRspGenUserTextFieldData;

extern PyTypeObject *PyCThostFtdcRspGenUserTextFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspGenUserTextFieldType_exec(PyObject *module);

#endif