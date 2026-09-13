#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYPARKEDORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYPARKEDORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询预埋撤单

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryParkedOrderActionField data;
} PyCThostFtdcQryParkedOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcQryParkedOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryParkedOrderActionFieldType_exec(PyObject *module);

#endif