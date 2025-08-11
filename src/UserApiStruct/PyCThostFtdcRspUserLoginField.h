#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPUSERLOGINFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPUSERLOGINFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspUserLoginField {
    PyObject_HEAD
    CThostFtdcRspUserLoginField data;
} PyCThostFtdcRspUserLoginField;

extern PyTypeObject PyCThostFtdcRspUserLoginFieldType;

extern int PyCThostFtdcRspUserLoginFieldType_init(PyObject *module);

#endif
