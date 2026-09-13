#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMINTRAPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM品种内对锁仓折扣参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySPBMIntraParameterField data;
} PyCThostFtdcQrySPBMIntraParameterFieldData;

extern PyTypeObject *PyCThostFtdcQrySPBMIntraParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySPBMIntraParameterFieldType_exec(PyObject *module);

#endif