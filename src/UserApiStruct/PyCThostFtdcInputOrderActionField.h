#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINPUTORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入报单操作

typedef struct PyCThostFtdcInputOrderActionField {
    PyObject_HEAD
    CThostFtdcInputOrderActionField data;
} PyCThostFtdcInputOrderActionField;

extern PyTypeObject PyCThostFtdcInputOrderActionFieldType;

extern int PyCThostFtdcInputOrderActionFieldType_init(PyObject *module);

#endif
