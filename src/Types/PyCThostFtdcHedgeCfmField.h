#ifndef PYCTP_TYPES_PYCTHOSTFTDCHEDGECFMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCHEDGECFMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套保申请回报

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcHedgeCfmField data;
} PyCThostFtdcHedgeCfmFieldData;

extern PyTypeObject *PyCThostFtdcHedgeCfmFieldType;
extern int PyCTP_module_add_PyCThostFtdcHedgeCfmFieldType_exec(PyObject *module);

#endif