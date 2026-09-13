#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQOPENACCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQOPENACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///转帐开户请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqOpenAccountField data;
} PyCThostFtdcReqOpenAccountFieldData;

extern PyTypeObject *PyCThostFtdcReqOpenAccountFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqOpenAccountFieldType_exec(PyObject *module);

#endif