#ifndef PYCTP_TYPES_PYCTHOSTFTDCRULEINTRAPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRULEINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE品种内对锁仓折扣参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRULEIntraParameterField data;
} PyCThostFtdcRULEIntraParameterFieldData;

extern PyTypeObject *PyCThostFtdcRULEIntraParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcRULEIntraParameterFieldType_exec(PyObject *module);

#endif