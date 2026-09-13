#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTHEDGECFMACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTHEDGECFMACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///套保申请撤销

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputHedgeCfmActionField data;
} PyCThostFtdcInputHedgeCfmActionFieldData;

extern PyTypeObject *PyCThostFtdcInputHedgeCfmActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputHedgeCfmActionFieldType_exec(PyObject *module);

#endif