#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQUSERLOGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqUserLoginField {
    PyObject_HEAD
    CThostFtdcReqUserLoginField data;
} PyCThostFtdcReqUserLoginField;

extern PyTypeObject PyCThostFtdcReqUserLoginFieldType;

extern int PyCThostFtdcReqUserLoginFieldType_init(PyObject *module);

#endif
