#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM跨品种抵扣参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySPBMInterParameterField data;
} PyCThostFtdcQrySPBMInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcQrySPBMInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySPBMInterParameterFieldType_exec(PyObject *module);

#endif