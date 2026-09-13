#ifndef PYCTP_TYPES_PYCTHOSTFTDCRULEINSTRPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRULEINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE合约保证金参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRULEInstrParameterField data;
} PyCThostFtdcRULEInstrParameterFieldData;

extern PyTypeObject *PyCThostFtdcRULEInstrParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcRULEInstrParameterFieldType_exec(PyObject *module);

#endif