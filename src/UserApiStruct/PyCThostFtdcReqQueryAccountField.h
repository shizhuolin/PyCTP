#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQQUERYACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQQUERYACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqQueryAccountField {
    PyObject_HEAD
    CThostFtdcReqQueryAccountField data;
} PyCThostFtdcReqQueryAccountField;

extern PyTypeObject PyCThostFtdcReqQueryAccountFieldType;

extern int PyCThostFtdcReqQueryAccountFieldType_init(PyObject *module);

#endif
