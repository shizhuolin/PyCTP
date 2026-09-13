#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXITEMERGENCYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXITEMERGENCYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///退出紧急状态参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExitEmergencyField data;
} PyCThostFtdcExitEmergencyFieldData;

extern PyTypeObject *PyCThostFtdcExitEmergencyFieldType;
extern int PyCTP_module_add_PyCThostFtdcExitEmergencyFieldType_exec(PyObject *module);

#endif