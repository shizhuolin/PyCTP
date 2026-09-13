#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRANSFERQRYDETAILRSPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRANSFERQRYDETAILRSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询银行交易明细请求响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTransferQryDetailRspField data;
} PyCThostFtdcTransferQryDetailRspFieldData;

extern PyTypeObject *PyCThostFtdcTransferQryDetailRspFieldType;
extern int PyCTP_module_add_PyCThostFtdcTransferQryDetailRspFieldType_exec(PyObject *module);

#endif