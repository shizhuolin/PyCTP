#ifndef PYCTP_TYPES_PYCTHOSTFTDCSPBMADDONINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSPBMADDONINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM附加跨品种抵扣参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSPBMAddOnInterParameterField data;
} PyCThostFtdcSPBMAddOnInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcSPBMAddOnInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSPBMAddOnInterParameterFieldType_exec(PyObject *module);

#endif