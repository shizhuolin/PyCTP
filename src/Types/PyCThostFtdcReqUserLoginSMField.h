#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQUSERLOGINSMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQUSERLOGINSMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///国密用户登录请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqUserLoginSMField data;
} PyCThostFtdcReqUserLoginSMFieldData;

extern PyTypeObject *PyCThostFtdcReqUserLoginSMFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqUserLoginSMFieldType_exec(PyObject *module);

#endif