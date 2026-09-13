#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQUSERAUTHMETHODFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQUSERAUTHMETHODFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户发出获取安全安全登陆方法请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqUserAuthMethodField data;
} PyCThostFtdcReqUserAuthMethodFieldData;

extern PyTypeObject *PyCThostFtdcReqUserAuthMethodFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqUserAuthMethodFieldType_exec(PyObject *module);

#endif