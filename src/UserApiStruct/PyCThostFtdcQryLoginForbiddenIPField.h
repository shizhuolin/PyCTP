#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYLOGINFORBIDDENIPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYLOGINFORBIDDENIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryLoginForbiddenIPField {
    PyObject_HEAD
    CThostFtdcQryLoginForbiddenIPField data;
} PyCThostFtdcQryLoginForbiddenIPField;

extern PyTypeObject PyCThostFtdcQryLoginForbiddenIPFieldType;

extern int PyCThostFtdcQryLoginForbiddenIPFieldType_init(PyObject *module);

#endif
