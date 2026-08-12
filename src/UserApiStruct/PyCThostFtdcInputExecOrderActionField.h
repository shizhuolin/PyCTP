#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTEXECORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTEXECORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入执行宣告操作

typedef struct PyCThostFtdcInputExecOrderActionField {
    PyObject_HEAD
    CThostFtdcInputExecOrderActionField data;
} PyCThostFtdcInputExecOrderActionField;

extern PyTypeObject PyCThostFtdcInputExecOrderActionFieldType;

extern int PyCThostFtdcInputExecOrderActionFieldType_init(PyObject *module);

#endif
