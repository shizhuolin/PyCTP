#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERDRIBYPASSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERDRIBYPASSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户中心权限豁免

typedef struct PyCThostFtdcUserDRIBypassField {
    PyObject_HEAD
    CThostFtdcUserDRIBypassField data;
} PyCThostFtdcUserDRIBypassField;

extern PyTypeObject PyCThostFtdcUserDRIBypassFieldType;

extern int PyCThostFtdcUserDRIBypassFieldType_init(PyObject *module);

#endif
