#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSSHORTOPTADJUSTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSSHORTOPTADJUSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS空头期权风险调整参数

typedef struct PyCThostFtdcRCAMSShortOptAdjustParamField {
    PyObject_HEAD
    CThostFtdcRCAMSShortOptAdjustParamField data;
} PyCThostFtdcRCAMSShortOptAdjustParamField;

extern PyTypeObject PyCThostFtdcRCAMSShortOptAdjustParamFieldType;

extern int PyCThostFtdcRCAMSShortOptAdjustParamFieldType_init(PyObject *module);

#endif
