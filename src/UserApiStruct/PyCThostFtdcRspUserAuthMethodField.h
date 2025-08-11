#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPUSERAUTHMETHODFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPUSERAUTHMETHODFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspUserAuthMethodField {
    PyObject_HEAD
    CThostFtdcRspUserAuthMethodField data;
} PyCThostFtdcRspUserAuthMethodField;

extern PyTypeObject PyCThostFtdcRspUserAuthMethodFieldType;

extern int PyCThostFtdcRspUserAuthMethodFieldType_init(PyObject *module);

#endif
