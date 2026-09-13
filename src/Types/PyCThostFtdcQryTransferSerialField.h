#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYTRANSFERSERIALFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYTRANSFERSERIALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///请求查询转帐流水

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryTransferSerialField data;
} PyCThostFtdcQryTransferSerialFieldData;

extern PyTypeObject *PyCThostFtdcQryTransferSerialFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryTransferSerialFieldType_exec(PyObject *module);

#endif