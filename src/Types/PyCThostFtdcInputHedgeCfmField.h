#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTHEDGECFMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTHEDGECFMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套保确认输入基本信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputHedgeCfmField data;
} PyCThostFtdcInputHedgeCfmFieldData;

extern PyTypeObject *PyCThostFtdcInputHedgeCfmFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputHedgeCfmFieldType_exec(PyObject *module);

#endif