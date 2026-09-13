#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYCURRDRIDENTITYFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYCURRDRIDENTITYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询当前交易中心

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryCurrDRIdentityField data;
} PyCThostFtdcQryCurrDRIdentityFieldData;

extern PyTypeObject *PyCThostFtdcQryCurrDRIdentityFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryCurrDRIdentityFieldType_exec(PyObject *module);

#endif