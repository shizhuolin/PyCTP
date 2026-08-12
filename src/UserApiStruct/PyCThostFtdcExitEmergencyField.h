#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXITEMERGENCYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCEXITEMERGENCYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///退出紧急状态参数

typedef struct PyCThostFtdcExitEmergencyField {
    PyObject_HEAD
    CThostFtdcExitEmergencyField data;
} PyCThostFtdcExitEmergencyField;

extern PyTypeObject PyCThostFtdcExitEmergencyFieldType;

extern int PyCThostFtdcExitEmergencyFieldType_init(PyObject *module);

#endif
