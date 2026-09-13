#ifndef PYCTP_TYPES_PYCTHOSTFTDCFENSUSERINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCFENSUSERINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///Fens用户信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcFensUserInfoField data;
} PyCThostFtdcFensUserInfoFieldData;

extern PyTypeObject *PyCThostFtdcFensUserInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcFensUserInfoFieldType_exec(PyObject *module);

#endif