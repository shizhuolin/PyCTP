#ifndef PYCTP_TYPES_PYCTHOSTFTDCCFMMCBROKERKEYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCFMMCBROKERKEYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///保证金监管系统经纪公司密钥

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCFMMCBrokerKeyField data;
} PyCThostFtdcCFMMCBrokerKeyFieldData;

extern PyTypeObject *PyCThostFtdcCFMMCBrokerKeyFieldType;
extern int PyCTP_module_add_PyCThostFtdcCFMMCBrokerKeyFieldType_exec(PyObject *module);

#endif