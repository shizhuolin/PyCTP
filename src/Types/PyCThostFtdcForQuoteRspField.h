#ifndef PYCTP_TYPES_PYCTHOSTFTDCFORQUOTERSPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCFORQUOTERSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///发给做市商的询价请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcForQuoteRspField data;
} PyCThostFtdcForQuoteRspFieldData;

extern PyTypeObject *PyCThostFtdcForQuoteRspFieldType;
extern int PyCTP_module_add_PyCThostFtdcForQuoteRspFieldType_exec(PyObject *module);

#endif