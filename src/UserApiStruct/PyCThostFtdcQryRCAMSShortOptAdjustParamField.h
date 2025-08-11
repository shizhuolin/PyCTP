#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSSHORTOPTADJUSTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSSHORTOPTADJUSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryRCAMSShortOptAdjustParamField {
    PyObject_HEAD
    CThostFtdcQryRCAMSShortOptAdjustParamField data;
} PyCThostFtdcQryRCAMSShortOptAdjustParamField;

extern PyTypeObject PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType;

extern int PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_init(PyObject *module);

#endif
