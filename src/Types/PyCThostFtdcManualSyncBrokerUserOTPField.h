#ifndef PYCTP_TYPES_PYCTHOSTFTDCMANUALSYNCBROKERUSEROTPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMANUALSYNCBROKERUSEROTPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///手工同步用户动态令牌

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcManualSyncBrokerUserOTPField data;
} PyCThostFtdcManualSyncBrokerUserOTPFieldData;

extern PyTypeObject *PyCThostFtdcManualSyncBrokerUserOTPFieldType;
extern int PyCTP_module_add_PyCThostFtdcManualSyncBrokerUserOTPFieldType_exec(PyObject *module);

#endif