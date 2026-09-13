#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRANSFERFUTURETOBANKRSPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRANSFERFUTURETOBANKRSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期货资金转银行请求响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTransferFutureToBankRspField data;
} PyCThostFtdcTransferFutureToBankRspFieldData;

extern PyTypeObject *PyCThostFtdcTransferFutureToBankRspFieldType;
extern int PyCTP_module_add_PyCThostFtdcTransferFutureToBankRspFieldType_exec(PyObject *module);

#endif