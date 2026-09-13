#ifndef PYCTP_TYPES_PYCTHOSTFTDCRCAMSINTRAPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRCAMSINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS品种内风险对冲参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRCAMSIntraParameterField data;
} PyCThostFtdcRCAMSIntraParameterFieldData;

extern PyTypeObject *PyCThostFtdcRCAMSIntraParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcRCAMSIntraParameterFieldType_exec(PyObject *module);

#endif