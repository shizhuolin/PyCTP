#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询报单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryOrderActionField data;
} PyCThostFtdcQryOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcQryOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryOrderActionFieldType_exec(PyObject *module);

#endif