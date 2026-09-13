#ifndef PYCTP_TYPES_PYCTHOSTFTDCCOMMPHASEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCOMMPHASEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///通讯阶段

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCommPhaseField data;
} PyCThostFtdcCommPhaseFieldData;

extern PyTypeObject *PyCThostFtdcCommPhaseFieldType;
extern int PyCTP_module_add_PyCThostFtdcCommPhaseFieldType_exec(PyObject *module);

#endif