#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSUPERUSERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSUPERUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询管理用户

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySuperUserField data;
} PyCThostFtdcQrySuperUserFieldData;

extern PyTypeObject *PyCThostFtdcQrySuperUserFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySuperUserFieldType_exec(PyObject *module);

#endif