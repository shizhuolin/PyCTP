#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMFUTUREPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMFUTUREPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM期货合约保证金参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySPBMFutureParameterField data;
} PyCThostFtdcQrySPBMFutureParameterFieldData;

extern PyTypeObject *PyCThostFtdcQrySPBMFutureParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySPBMFutureParameterFieldType_exec(PyObject *module);

#endif