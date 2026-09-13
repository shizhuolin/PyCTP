#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYAUTHFORBIDDENIPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYAUTHFORBIDDENIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询禁止认证IP

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryAuthForbiddenIPField data;
} PyCThostFtdcQryAuthForbiddenIPFieldData;

extern PyTypeObject *PyCThostFtdcQryAuthForbiddenIPFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryAuthForbiddenIPFieldType_exec(PyObject *module);

#endif