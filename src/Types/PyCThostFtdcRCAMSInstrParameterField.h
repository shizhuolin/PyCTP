#ifndef PYCTP_TYPES_PYCTHOSTFTDCRCAMSINSTRPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRCAMSINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS同合约风险对冲参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRCAMSInstrParameterField data;
} PyCThostFtdcRCAMSInstrParameterFieldData;

extern PyTypeObject *PyCThostFtdcRCAMSInstrParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcRCAMSInstrParameterFieldType_exec(PyObject *module);

#endif