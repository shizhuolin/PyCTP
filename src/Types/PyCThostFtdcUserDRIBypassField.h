#ifndef PYCTP_TYPES_PYCTHOSTFTDCUSERDRIBYPASSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCUSERDRIBYPASSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户中心权限豁免

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcUserDRIBypassField data;
} PyCThostFtdcUserDRIBypassFieldData;

extern PyTypeObject *PyCThostFtdcUserDRIBypassFieldType;
extern int PyCTP_module_add_PyCThostFtdcUserDRIBypassFieldType_exec(PyObject *module);

#endif