#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERSESSIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERSESSIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户会话

typedef struct PyCThostFtdcUserSessionField {
    PyObject_HEAD
    CThostFtdcUserSessionField data;
} PyCThostFtdcUserSessionField;

extern PyTypeObject PyCThostFtdcUserSessionFieldType;

extern int PyCThostFtdcUserSessionFieldType_init(PyObject *module);

#endif
