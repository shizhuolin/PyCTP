#ifndef PYCTP_TYPES_PYCTHOSTFTDCDRTRANSFERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCDRTRANSFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///灾备交易转换报文

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcDRTransferField data;
} PyCThostFtdcDRTransferFieldData;

extern PyTypeObject *PyCThostFtdcDRTransferFieldType;
extern int PyCTP_module_add_PyCThostFtdcDRTransferFieldType_exec(PyObject *module);

#endif