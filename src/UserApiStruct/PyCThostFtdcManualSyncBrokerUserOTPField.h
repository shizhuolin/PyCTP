#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMANUALSYNCBROKERUSEROTPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMANUALSYNCBROKERUSEROTPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///手工同步用户动态令牌

typedef struct PyCThostFtdcManualSyncBrokerUserOTPField {
    PyObject_HEAD
    CThostFtdcManualSyncBrokerUserOTPField data;
} PyCThostFtdcManualSyncBrokerUserOTPField;

extern PyTypeObject PyCThostFtdcManualSyncBrokerUserOTPFieldType;

extern int PyCThostFtdcManualSyncBrokerUserOTPFieldType_init(PyObject *module);

#endif
