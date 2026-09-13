#ifndef PYCTP_TYPES_PYCTHOSTFTDCRCAMSINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRCAMSINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS跨品种风险折抵参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRCAMSInterParameterField data;
} PyCThostFtdcRCAMSInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcRCAMSInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcRCAMSInterParameterFieldType_exec(PyObject *module);

#endif