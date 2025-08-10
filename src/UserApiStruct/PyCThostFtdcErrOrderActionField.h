#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCERRORDERACTIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCERRORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///错误报单操作

typedef struct PyCThostFtdcErrOrderActionField {
    PyObject_HEAD
    CThostFtdcErrOrderActionField data;
} PyCThostFtdcErrOrderActionField;

extern PyTypeObject PyCThostFtdcErrOrderActionFieldType;

extern int PyCThostFtdcErrOrderActionFieldType_init(PyObject *module);

#endif
