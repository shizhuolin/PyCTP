#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPREPEALFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPREPEALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspRepealField {
    PyObject_HEAD
    CThostFtdcRspRepealField data;
} PyCThostFtdcRspRepealField;

extern PyTypeObject PyCThostFtdcRspRepealFieldType;

extern int PyCThostFtdcRspRepealFieldType_init(PyObject *module);

#endif
