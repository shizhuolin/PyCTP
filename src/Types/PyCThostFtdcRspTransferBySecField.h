#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPTRANSFERBYSECFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPTRANSFERBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///次中心发起的转帐交易回报

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspTransferBySecField data;
} PyCThostFtdcRspTransferBySecFieldData;

extern PyTypeObject *PyCThostFtdcRspTransferBySecFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspTransferBySecFieldType_exec(PyObject *module);

#endif