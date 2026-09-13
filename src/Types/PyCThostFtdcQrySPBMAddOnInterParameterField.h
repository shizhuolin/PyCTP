#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMADDONINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMADDONINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM附加跨品种抵扣参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySPBMAddOnInterParameterField data;
} PyCThostFtdcQrySPBMAddOnInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcQrySPBMAddOnInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySPBMAddOnInterParameterFieldType_exec(PyObject *module);

#endif