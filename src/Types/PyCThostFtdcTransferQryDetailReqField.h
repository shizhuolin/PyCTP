#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRANSFERQRYDETAILREQFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRANSFERQRYDETAILREQFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询银行交易明细请求，TradeCode=204999

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTransferQryDetailReqField data;
} PyCThostFtdcTransferQryDetailReqFieldData;

extern PyTypeObject *PyCThostFtdcTransferQryDetailReqFieldType;
extern int PyCTP_module_add_PyCThostFtdcTransferQryDetailReqFieldType_exec(PyObject *module);

#endif