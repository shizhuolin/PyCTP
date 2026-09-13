#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQTRANSFERBYSECFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQTRANSFERBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///次中心发起的转帐交易

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqTransferBySecField data;
} PyCThostFtdcReqTransferBySecFieldData;

extern PyTypeObject *PyCThostFtdcReqTransferBySecFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqTransferBySecFieldType_exec(PyObject *module);

#endif