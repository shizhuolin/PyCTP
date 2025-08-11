#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERPASSWORDUPDATEFROMSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERPASSWORDUPDATEFROMSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcUserPasswordUpdateFromSecField {
    PyObject_HEAD
    CThostFtdcUserPasswordUpdateFromSecField data;
} PyCThostFtdcUserPasswordUpdateFromSecField;

extern PyTypeObject PyCThostFtdcUserPasswordUpdateFromSecFieldType;

extern int PyCThostFtdcUserPasswordUpdateFromSecFieldType_init(PyObject *module);

#endif
