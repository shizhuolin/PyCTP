#ifndef PYCTP_TYPES_PYCTHOSTFTDCAUTHUSERIDFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCAUTHUSERIDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///终端用户绑定信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcAuthUserIDField data;
} PyCThostFtdcAuthUserIDFieldData;

extern PyTypeObject *PyCThostFtdcAuthUserIDFieldType;
extern int PyCTP_module_add_PyCThostFtdcAuthUserIDFieldType_exec(PyObject *module);

#endif