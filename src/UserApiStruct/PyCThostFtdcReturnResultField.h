#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRETURNRESULTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRETURNRESULTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReturnResultField {
    PyObject_HEAD
    CThostFtdcReturnResultField data;
} PyCThostFtdcReturnResultField;

extern PyTypeObject PyCThostFtdcReturnResultFieldType;

extern int PyCThostFtdcReturnResultFieldType_init(PyObject *module);

#endif
