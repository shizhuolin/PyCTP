#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQAPIHANDSHAKEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQAPIHANDSHAKEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///api握手请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqApiHandshakeField data;
} PyCThostFtdcReqApiHandshakeFieldData;

extern PyTypeObject *PyCThostFtdcReqApiHandshakeFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqApiHandshakeFieldType_exec(PyObject *module);

#endif