#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRULEINSTRPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRULEINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE合约保证金参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRULEInstrParameterField data;
} PyCThostFtdcQryRULEInstrParameterFieldData;

extern PyTypeObject *PyCThostFtdcQryRULEInstrParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRULEInstrParameterFieldType_exec(PyObject *module);

#endif