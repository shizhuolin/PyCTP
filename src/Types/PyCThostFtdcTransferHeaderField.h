#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRANSFERHEADERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRANSFERHEADERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期转帐报文头

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTransferHeaderField data;
} PyCThostFtdcTransferHeaderFieldData;

extern PyTypeObject *PyCThostFtdcTransferHeaderFieldType;
extern int PyCTP_module_add_PyCThostFtdcTransferHeaderFieldType_exec(PyObject *module);

#endif