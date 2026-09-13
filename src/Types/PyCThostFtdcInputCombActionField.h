#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTCOMBACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTCOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入的申请组合

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputCombActionField data;
} PyCThostFtdcInputCombActionFieldData;

extern PyTypeObject *PyCThostFtdcInputCombActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputCombActionFieldType_exec(PyObject *module);

#endif