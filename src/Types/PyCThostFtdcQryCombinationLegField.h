#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYCOMBINATIONLEGFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYCOMBINATIONLEGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询组合合约分腿

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryCombinationLegField data;
} PyCThostFtdcQryCombinationLegFieldData;

extern PyTypeObject *PyCThostFtdcQryCombinationLegFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryCombinationLegFieldType_exec(PyObject *module);

#endif