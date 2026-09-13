#ifndef PYCTP_TYPES_PYCTHOSTFTDCHEDGECFMACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCHEDGECFMACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套保申请撤销回报

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcHedgeCfmActionField data;
} PyCThostFtdcHedgeCfmActionFieldData;

extern PyTypeObject *PyCThostFtdcHedgeCfmActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcHedgeCfmActionFieldType_exec(PyObject *module);

#endif