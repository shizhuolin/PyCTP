#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYQUERYFUTUREACCOUNTBYSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTIFYQUERYFUTUREACCOUNTBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcNotifyQueryFutureAccountBySecField {
    PyObject_HEAD
    CThostFtdcNotifyQueryFutureAccountBySecField data;
} PyCThostFtdcNotifyQueryFutureAccountBySecField;

extern PyTypeObject PyCThostFtdcNotifyQueryFutureAccountBySecFieldType;

extern int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_init(PyObject *module);

#endif
