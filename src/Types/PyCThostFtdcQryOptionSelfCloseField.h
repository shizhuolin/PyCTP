#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYOPTIONSELFCLOSEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYOPTIONSELFCLOSEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权自对冲查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryOptionSelfCloseField data;
} PyCThostFtdcQryOptionSelfCloseFieldData;

extern PyTypeObject *PyCThostFtdcQryOptionSelfCloseFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryOptionSelfCloseFieldType_exec(PyObject *module);

#endif