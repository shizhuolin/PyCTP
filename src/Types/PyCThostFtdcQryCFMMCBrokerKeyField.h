#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYCFMMCBROKERKEYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYCFMMCBROKERKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询保证金监管系统经纪公司密钥

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryCFMMCBrokerKeyField data;
} PyCThostFtdcQryCFMMCBrokerKeyFieldData;

extern PyTypeObject *PyCThostFtdcQryCFMMCBrokerKeyFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryCFMMCBrokerKeyFieldType_exec(PyObject *module);

#endif