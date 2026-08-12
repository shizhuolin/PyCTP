#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSSHORTOPTADJUSTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSSHORTOPTADJUSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS空头期权风险调整参数查询

typedef struct PyCThostFtdcQryRCAMSShortOptAdjustParamField {
    PyObject_HEAD
    CThostFtdcQryRCAMSShortOptAdjustParamField data;
} PyCThostFtdcQryRCAMSShortOptAdjustParamField;

extern PyTypeObject PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType;

extern int PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_init(PyObject *module);

#endif
