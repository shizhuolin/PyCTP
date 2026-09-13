#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADERASSIGNFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADERASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///席位与交易中心对应关系

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTraderAssignField data;
} PyCThostFtdcTraderAssignFieldData;

extern PyTypeObject *PyCThostFtdcTraderAssignFieldType;
extern int PyCTP_module_add_PyCThostFtdcTraderAssignFieldType_exec(PyObject *module);

#endif