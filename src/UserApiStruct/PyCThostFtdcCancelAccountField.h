#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCANCELACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCANCELACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcCancelAccountField {
    PyObject_HEAD
    CThostFtdcCancelAccountField data;
} PyCThostFtdcCancelAccountField;

extern PyTypeObject PyCThostFtdcCancelAccountFieldType;

extern int PyCThostFtdcCancelAccountFieldType_init(PyObject *module);

#endif
