#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTSPDAPPLYACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTSPDAPPLYACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利申请撤销

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputSpdApplyActionField data;
} PyCThostFtdcInputSpdApplyActionFieldData;

extern PyTypeObject *PyCThostFtdcInputSpdApplyActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputSpdApplyActionFieldType_exec(PyObject *module);

#endif