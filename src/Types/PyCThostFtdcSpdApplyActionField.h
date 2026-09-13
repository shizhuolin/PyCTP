#ifndef PYCTP_TYPES_PYCTHOSTFTDCSPDAPPLYACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSPDAPPLYACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利申请撤销回报

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSpdApplyActionField data;
} PyCThostFtdcSpdApplyActionFieldData;

extern PyTypeObject *PyCThostFtdcSpdApplyActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcSpdApplyActionFieldType_exec(PyObject *module);

#endif