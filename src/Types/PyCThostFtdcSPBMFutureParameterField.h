#ifndef PYCTP_TYPES_PYCTHOSTFTDCSPBMFUTUREPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSPBMFUTUREPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM期货合约保证金参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSPBMFutureParameterField data;
} PyCThostFtdcSPBMFutureParameterFieldData;

extern PyTypeObject *PyCThostFtdcSPBMFutureParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSPBMFutureParameterFieldType_exec(PyObject *module);

#endif