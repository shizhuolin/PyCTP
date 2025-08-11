#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMANUALSYNCBROKERUSEROTPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMANUALSYNCBROKERUSEROTPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcManualSyncBrokerUserOTPField {
    PyObject_HEAD
    CThostFtdcManualSyncBrokerUserOTPField data;
} PyCThostFtdcManualSyncBrokerUserOTPField;

extern PyTypeObject PyCThostFtdcManualSyncBrokerUserOTPFieldType;

extern int PyCThostFtdcManualSyncBrokerUserOTPFieldType_init(PyObject *module);

#endif
