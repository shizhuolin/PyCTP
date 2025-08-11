#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCACCOUNTPROPERTYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCACCOUNTPROPERTYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcAccountPropertyField {
    PyObject_HEAD
    CThostFtdcAccountPropertyField data;
} PyCThostFtdcAccountPropertyField;

extern PyTypeObject PyCThostFtdcAccountPropertyFieldType;

extern int PyCThostFtdcAccountPropertyFieldType_init(PyObject *module);

#endif
