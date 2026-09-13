#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRULEINTRAPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRULEINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE品种内对锁仓折扣参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRULEIntraParameterField data;
} PyCThostFtdcQryRULEIntraParameterFieldData;

extern PyTypeObject *PyCThostFtdcQryRULEIntraParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRULEIntraParameterFieldType_exec(PyObject *module);

#endif