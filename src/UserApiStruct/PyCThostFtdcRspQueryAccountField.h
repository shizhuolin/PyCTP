#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPQUERYACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPQUERYACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRspQueryAccountField {
    PyObject_HEAD
    CThostFtdcRspQueryAccountField data;
} PyCThostFtdcRspQueryAccountField;

extern PyTypeObject PyCThostFtdcRspQueryAccountFieldType;

extern int PyCThostFtdcRspQueryAccountFieldType_init(PyObject *module);

#endif
