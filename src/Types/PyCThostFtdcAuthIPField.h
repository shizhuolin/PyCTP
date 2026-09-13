#ifndef PYCTP_TYPES_PYCTHOSTFTDCAUTHIPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCAUTHIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户IP绑定信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcAuthIPField data;
} PyCThostFtdcAuthIPFieldData;

extern PyTypeObject *PyCThostFtdcAuthIPFieldType;
extern int PyCTP_module_add_PyCThostFtdcAuthIPFieldType_exec(PyObject *module);

#endif