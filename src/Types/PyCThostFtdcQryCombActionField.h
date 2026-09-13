#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYCOMBACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYCOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///申请组合查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryCombActionField data;
} PyCThostFtdcQryCombActionFieldData;

extern PyTypeObject *PyCThostFtdcQryCombActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryCombActionFieldType_exec(PyObject *module);

#endif