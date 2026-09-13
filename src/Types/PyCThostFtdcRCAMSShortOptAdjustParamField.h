#ifndef PYCTP_TYPES_PYCTHOSTFTDCRCAMSSHORTOPTADJUSTPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRCAMSSHORTOPTADJUSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS空头期权风险调整参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRCAMSShortOptAdjustParamField data;
} PyCThostFtdcRCAMSShortOptAdjustParamFieldData;

extern PyTypeObject *PyCThostFtdcRCAMSShortOptAdjustParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcRCAMSShortOptAdjustParamFieldType_exec(PyObject *module);

#endif