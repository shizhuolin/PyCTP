#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYTRADERASSIGNFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYTRADERASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///席位与交易中心对应关系维护查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryTraderAssignField data;
} PyCThostFtdcQryTraderAssignFieldData;

extern PyTypeObject *PyCThostFtdcQryTraderAssignFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryTraderAssignFieldType_exec(PyObject *module);

#endif