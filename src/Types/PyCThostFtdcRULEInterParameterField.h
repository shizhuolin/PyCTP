#ifndef PYCTP_TYPES_PYCTHOSTFTDCRULEINTERPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRULEINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE跨品种抵扣参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRULEInterParameterField data;
} PyCThostFtdcRULEInterParameterFieldData;

extern PyTypeObject *PyCThostFtdcRULEInterParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcRULEInterParameterFieldType_exec(PyObject *module);

#endif