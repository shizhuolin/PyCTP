#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSINSTRPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS同合约风险对冲参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRCAMSInstrParameterField data;
} PyCThostFtdcQryRCAMSInstrParameterFieldData;

extern PyTypeObject *PyCThostFtdcQryRCAMSInstrParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRCAMSInstrParameterFieldType_exec(PyObject *module);

#endif