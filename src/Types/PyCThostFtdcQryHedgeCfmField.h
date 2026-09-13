#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYHEDGECFMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYHEDGECFMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套利套保申请查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryHedgeCfmField data;
} PyCThostFtdcQryHedgeCfmFieldData;

extern PyTypeObject *PyCThostFtdcQryHedgeCfmFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryHedgeCfmFieldType_exec(PyObject *module);

#endif