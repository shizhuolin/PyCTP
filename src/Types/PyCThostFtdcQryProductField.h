#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYPRODUCTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYPRODUCTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询产品

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryProductField data;
} PyCThostFtdcQryProductFieldData;

extern PyTypeObject *PyCThostFtdcQryProductFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryProductFieldType_exec(PyObject *module);

#endif