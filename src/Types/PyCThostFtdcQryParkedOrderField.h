#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYPARKEDORDERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYPARKEDORDERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询预埋单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryParkedOrderField data;
} PyCThostFtdcQryParkedOrderFieldData;

extern PyTypeObject *PyCThostFtdcQryParkedOrderFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryParkedOrderFieldType_exec(PyObject *module);

#endif