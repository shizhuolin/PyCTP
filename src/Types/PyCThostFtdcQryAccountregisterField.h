#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYACCOUNTREGISTERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYACCOUNTREGISTERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///请求查询银期签约关系

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryAccountregisterField data;
} PyCThostFtdcQryAccountregisterFieldData;

extern PyTypeObject *PyCThostFtdcQryAccountregisterFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryAccountregisterFieldType_exec(PyObject *module);

#endif