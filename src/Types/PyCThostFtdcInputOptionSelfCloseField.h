#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTOPTIONSELFCLOSEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTOPTIONSELFCLOSEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入的期权自对冲

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputOptionSelfCloseField data;
} PyCThostFtdcInputOptionSelfCloseFieldData;

extern PyTypeObject *PyCThostFtdcInputOptionSelfCloseFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputOptionSelfCloseFieldType_exec(PyObject *module);

#endif