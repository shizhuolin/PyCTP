#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS跨品种风险折抵参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRCAMSInterParameterField data;
} PyCThostFtdcQryRCAMSInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcQryRCAMSInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRCAMSInterParameterFieldType_exec(PyObject *module);

#endif