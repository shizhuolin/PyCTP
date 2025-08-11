#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPGENUSERTEXTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPGENUSERTEXTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspGenUserTextField {
    PyObject_HEAD
    CThostFtdcRspGenUserTextField data;
} PyCThostFtdcRspGenUserTextField;

extern PyTypeObject PyCThostFtdcRspGenUserTextFieldType;

extern int PyCThostFtdcRspGenUserTextFieldType_init(PyObject *module);

#endif
