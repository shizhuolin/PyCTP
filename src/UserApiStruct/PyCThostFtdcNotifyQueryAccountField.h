#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYQUERYACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYQUERYACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcNotifyQueryAccountField {
    PyObject_HEAD
    CThostFtdcNotifyQueryAccountField data;
} PyCThostFtdcNotifyQueryAccountField;

extern PyTypeObject PyCThostFtdcNotifyQueryAccountFieldType;

extern int PyCThostFtdcNotifyQueryAccountFieldType_init(PyObject *module);

#endif
