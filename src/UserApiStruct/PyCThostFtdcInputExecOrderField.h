#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTEXECORDERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTEXECORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入的执行宣告

typedef struct PyCThostFtdcInputExecOrderField {
    PyObject_HEAD
    CThostFtdcInputExecOrderField data;
} PyCThostFtdcInputExecOrderField;

extern PyTypeObject PyCThostFtdcInputExecOrderFieldType;

extern int PyCThostFtdcInputExecOrderFieldType_init(PyObject *module);

#endif
