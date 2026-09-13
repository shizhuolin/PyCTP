#ifndef PYCTP_TYPES_PYCTHOSTFTDCSPBMINTRAPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSPBMINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM品种内对锁仓折扣参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSPBMIntraParameterField data;
} PyCThostFtdcSPBMIntraParameterFieldData;

extern PyTypeObject *PyCThostFtdcSPBMIntraParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSPBMIntraParameterFieldType_exec(PyObject *module);

#endif