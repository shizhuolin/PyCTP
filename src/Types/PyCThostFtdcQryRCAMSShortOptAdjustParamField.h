#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSSHORTOPTADJUSTPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYRCAMSSHORTOPTADJUSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS空头期权风险调整参数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryRCAMSShortOptAdjustParamField data;
} PyCThostFtdcQryRCAMSShortOptAdjustParamFieldData;

extern PyTypeObject *PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_exec(PyObject *module);

#endif