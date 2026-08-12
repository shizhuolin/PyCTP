#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTSPDAPPLYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTSPDAPPLYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利确认输入基本信息

typedef struct PyCThostFtdcInputSpdApplyField {
    PyObject_HEAD
    CThostFtdcInputSpdApplyField data;
} PyCThostFtdcInputSpdApplyField;

extern PyTypeObject PyCThostFtdcInputSpdApplyFieldType;

extern int PyCThostFtdcInputSpdApplyFieldType_init(PyObject *module);

#endif
