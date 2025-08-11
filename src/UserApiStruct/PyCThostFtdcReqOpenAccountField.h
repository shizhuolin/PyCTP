#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQOPENACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQOPENACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqOpenAccountField {
    PyObject_HEAD
    CThostFtdcReqOpenAccountField data;
} PyCThostFtdcReqOpenAccountField;

extern PyTypeObject PyCThostFtdcReqOpenAccountFieldType;

extern int PyCThostFtdcReqOpenAccountFieldType_init(PyObject *module);

#endif
