#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPAPIHANDSHAKEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPAPIHANDSHAKEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///front发给api的握手回复

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspApiHandshakeField data;
} PyCThostFtdcRspApiHandshakeFieldData;

extern PyTypeObject *PyCThostFtdcRspApiHandshakeFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspApiHandshakeFieldType_exec(PyObject *module);

#endif