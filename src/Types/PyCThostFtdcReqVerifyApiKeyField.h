#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQVERIFYAPIKEYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQVERIFYAPIKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///api给front的验证key的请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqVerifyApiKeyField data;
} PyCThostFtdcReqVerifyApiKeyFieldData;

extern PyTypeObject *PyCThostFtdcReqVerifyApiKeyFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqVerifyApiKeyFieldType_exec(PyObject *module);

#endif