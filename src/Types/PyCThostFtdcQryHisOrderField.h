#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYHISORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYHISORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询报单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryHisOrderField data;
} PyCThostFtdcQryHisOrderFieldData;

extern PyTypeObject *PyCThostFtdcQryHisOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryHisOrderFieldType_exec(PyObject *module);

#endif