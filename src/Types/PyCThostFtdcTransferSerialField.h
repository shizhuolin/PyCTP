#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRANSFERSERIALFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRANSFERSERIALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期转账交易流水表

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTransferSerialField data;
} PyCThostFtdcTransferSerialFieldData;

extern PyTypeObject *PyCThostFtdcTransferSerialFieldType;
extern int PyCTP_module_add_PyCThostFtdcTransferSerialFieldType_exec(PyObject *module);

#endif