#ifndef PYCTP_TYPES_PYCTHOSTFTDCCURRDRIDENTITYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCURRDRIDENTITYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///当前交易中心

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCurrDRIdentityField data;
} PyCThostFtdcCurrDRIdentityFieldData;

extern PyTypeObject *PyCThostFtdcCurrDRIdentityFieldType;
extern int PyCTP_module_add_PyCThostFtdcCurrDRIdentityFieldType_exec(PyObject *module);

#endif