#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYFRONTSTATUSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYFRONTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询前置状态

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryFrontStatusField data;
} PyCThostFtdcQryFrontStatusFieldData;

extern PyTypeObject *PyCThostFtdcQryFrontStatusFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryFrontStatusFieldType_exec(PyObject *module);

#endif