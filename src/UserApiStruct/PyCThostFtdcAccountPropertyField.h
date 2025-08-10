#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCACCOUNTPROPERTYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCACCOUNTPROPERTYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///银行账户属性

typedef struct PyCThostFtdcAccountPropertyField {
    PyObject_HEAD
    CThostFtdcAccountPropertyField data;
} PyCThostFtdcAccountPropertyField;

extern PyTypeObject PyCThostFtdcAccountPropertyFieldType;

extern int PyCThostFtdcAccountPropertyFieldType_init(PyObject *module);

#endif
