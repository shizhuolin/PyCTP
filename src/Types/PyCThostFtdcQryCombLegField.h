#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYCOMBLEGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYCOMBLEGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合腿信息查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryCombLegField data;
} PyCThostFtdcQryCombLegFieldData;

extern PyTypeObject *PyCThostFtdcQryCombLegFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryCombLegFieldType_exec(PyObject *module);

#endif