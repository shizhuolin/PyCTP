#ifndef PYCTP_TYPES_PYCTHOSTFTDCAUTHFORBIDDENIPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCAUTHFORBIDDENIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///禁止认证IP

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcAuthForbiddenIPField data;
} PyCThostFtdcAuthForbiddenIPFieldData;

extern PyTypeObject *PyCThostFtdcAuthForbiddenIPFieldType;
extern int PyCTP_module_add_PyCThostFtdcAuthForbiddenIPFieldType_exec(PyObject *module);

#endif