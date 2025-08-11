#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCHANGEACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCHANGEACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcChangeAccountField {
    PyObject_HEAD
    CThostFtdcChangeAccountField data;
} PyCThostFtdcChangeAccountField;

extern PyTypeObject PyCThostFtdcChangeAccountFieldType;

extern int PyCThostFtdcChangeAccountFieldType_init(PyObject *module);

#endif
