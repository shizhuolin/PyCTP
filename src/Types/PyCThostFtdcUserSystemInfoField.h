#ifndef PYCTP_TYPES_PYCTHOSTFTDCUSERSYSTEMINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCUSERSYSTEMINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户系统信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcUserSystemInfoField data;
} PyCThostFtdcUserSystemInfoFieldData;

extern PyTypeObject *PyCThostFtdcUserSystemInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcUserSystemInfoFieldType_exec(PyObject *module);

#endif