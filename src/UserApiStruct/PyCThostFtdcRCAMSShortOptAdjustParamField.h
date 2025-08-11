#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSSHORTOPTADJUSTPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSSHORTOPTADJUSTPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRCAMSShortOptAdjustParamField {
    PyObject_HEAD
    CThostFtdcRCAMSShortOptAdjustParamField data;
} PyCThostFtdcRCAMSShortOptAdjustParamField;

extern PyTypeObject PyCThostFtdcRCAMSShortOptAdjustParamFieldType;

extern int PyCThostFtdcRCAMSShortOptAdjustParamFieldType_init(PyObject *module);

#endif
