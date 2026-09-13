#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSPMMPRODUCTPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSPMMPRODUCTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPMM产品参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySPMMProductParamField data;
} PyCThostFtdcQrySPMMProductParamFieldData;

extern PyTypeObject *PyCThostFtdcQrySPMMProductParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySPMMProductParamFieldType_exec(PyObject *module);

#endif