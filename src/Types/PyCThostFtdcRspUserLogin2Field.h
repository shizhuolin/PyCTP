#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPUSERLOGIN2FIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPUSERLOGIN2FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户登录应答2

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspUserLogin2Field data;
} PyCThostFtdcRspUserLogin2FieldData;

extern PyTypeObject *PyCThostFtdcRspUserLogin2FieldType;
extern int PyCTP_module_add_PyCThostFtdcRspUserLogin2FieldType_exec(PyObject *module);

#endif