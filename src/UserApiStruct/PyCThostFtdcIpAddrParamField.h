#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCIPADDRPARAMFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCIPADDRPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcIpAddrParamField {
    PyObject_HEAD
    CThostFtdcIpAddrParamField data;
} PyCThostFtdcIpAddrParamField;

extern PyTypeObject PyCThostFtdcIpAddrParamFieldType;

extern int PyCThostFtdcIpAddrParamFieldType_init(PyObject *module);

#endif
