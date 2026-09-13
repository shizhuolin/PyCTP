#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRANSFERBANKFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRANSFERBANKFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///转帐银行

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTransferBankField data;
} PyCThostFtdcTransferBankFieldData;

extern PyTypeObject *PyCThostFtdcTransferBankFieldType;
extern int PyCTP_module_add_PyCThostFtdcTransferBankFieldType_exec(PyObject *module);

#endif