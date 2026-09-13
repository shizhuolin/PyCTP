#ifndef PYCTP_TYPES_PYCTHOSTFTDCSPBMINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSPBMINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM跨品种抵扣参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSPBMInterParameterField data;
} PyCThostFtdcSPBMInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcSPBMInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSPBMInterParameterFieldType_exec(PyObject *module);

#endif