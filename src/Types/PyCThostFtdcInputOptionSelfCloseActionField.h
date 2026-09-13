#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTOPTIONSELFCLOSEACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTOPTIONSELFCLOSEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入期权自对冲操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputOptionSelfCloseActionField data;
} PyCThostFtdcInputOptionSelfCloseActionFieldData;

extern PyTypeObject *PyCThostFtdcInputOptionSelfCloseActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputOptionSelfCloseActionFieldType_exec(PyObject *module);

#endif