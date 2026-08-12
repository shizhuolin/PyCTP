#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTSPDAPPLYACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTSPDAPPLYACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利申请撤销

typedef struct PyCThostFtdcInputSpdApplyActionField {
    PyObject_HEAD
    CThostFtdcInputSpdApplyActionField data;
} PyCThostFtdcInputSpdApplyActionField;

extern PyTypeObject PyCThostFtdcInputSpdApplyActionFieldType;

extern int PyCThostFtdcInputSpdApplyActionFieldType_init(PyObject *module);

#endif
