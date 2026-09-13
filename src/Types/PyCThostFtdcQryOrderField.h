#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询报单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryOrderField data;
} PyCThostFtdcQryOrderFieldData;

extern PyTypeObject *PyCThostFtdcQryOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryOrderFieldType_exec(PyObject *module);

#endif