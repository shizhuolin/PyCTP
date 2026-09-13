#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSINTRAPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS品种内风险对冲参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRCAMSIntraParameterField data;
} PyCThostFtdcQryRCAMSIntraParameterFieldData;

extern PyTypeObject *PyCThostFtdcQryRCAMSIntraParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRCAMSIntraParameterFieldType_exec(PyObject *module);

#endif