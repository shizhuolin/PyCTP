#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQREPEALFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQREPEALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///冲正请求

typedef struct PyCThostFtdcReqRepealField {
    PyObject_HEAD
    CThostFtdcReqRepealField data;
} PyCThostFtdcReqRepealField;

extern PyTypeObject PyCThostFtdcReqRepealFieldType;

extern int PyCThostFtdcReqRepealFieldType_init(PyObject *module);

#endif
