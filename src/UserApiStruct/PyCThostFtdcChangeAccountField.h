#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCHANGEACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCHANGEACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银期变更银行账号信息

typedef struct PyCThostFtdcChangeAccountField {
    PyObject_HEAD
    CThostFtdcChangeAccountField data;
} PyCThostFtdcChangeAccountField;

extern PyTypeObject PyCThostFtdcChangeAccountFieldType;

extern int PyCThostFtdcChangeAccountFieldType_init(PyObject *module);

#endif
