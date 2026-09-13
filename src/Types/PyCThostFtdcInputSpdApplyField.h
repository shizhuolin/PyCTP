#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTSPDAPPLYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTSPDAPPLYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利确认输入基本信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputSpdApplyField data;
} PyCThostFtdcInputSpdApplyFieldData;

extern PyTypeObject *PyCThostFtdcInputSpdApplyFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputSpdApplyFieldType_exec(PyObject *module);

#endif