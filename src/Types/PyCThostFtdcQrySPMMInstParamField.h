#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSPMMINSTPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSPMMINSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPMM合约参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySPMMInstParamField data;
} PyCThostFtdcQrySPMMInstParamFieldData;

extern PyTypeObject *PyCThostFtdcQrySPMMInstParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySPMMInstParamFieldType_exec(PyObject *module);

#endif