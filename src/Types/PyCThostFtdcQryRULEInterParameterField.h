#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRULEINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRULEINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE跨品种抵扣参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRULEInterParameterField data;
} PyCThostFtdcQryRULEInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcQryRULEInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRULEInterParameterFieldType_exec(PyObject *module);

#endif