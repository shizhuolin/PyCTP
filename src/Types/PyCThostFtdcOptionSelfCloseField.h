#ifndef PYCTP_TYPES_PYCTHOSTFTDCOPTIONSELFCLOSEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCOPTIONSELFCLOSEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权自对冲

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcOptionSelfCloseField data;
} PyCThostFtdcOptionSelfCloseFieldData;

extern PyTypeObject *PyCThostFtdcOptionSelfCloseFieldType;
extern int PyCTP_module_add_PyCThostFtdcOptionSelfCloseFieldType_exec(PyObject *module);

#endif