#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQCANCELACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQCANCELACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcReqCancelAccountField {
    PyObject_HEAD
    CThostFtdcReqCancelAccountField data;
} PyCThostFtdcReqCancelAccountField;

extern PyTypeObject PyCThostFtdcReqCancelAccountFieldType;

extern int PyCThostFtdcReqCancelAccountFieldType_init(PyObject *module);

#endif
