#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQREPEALFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQREPEALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///冲正请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqRepealField data;
} PyCThostFtdcReqRepealFieldData;

extern PyTypeObject *PyCThostFtdcReqRepealFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqRepealFieldType_exec(PyObject *module);

#endif