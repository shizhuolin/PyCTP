#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYPRODUCTGROUPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYPRODUCTGROUPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询产品组

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryProductGroupField data;
} PyCThostFtdcQryProductGroupFieldData;

extern PyTypeObject *PyCThostFtdcQryProductGroupFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryProductGroupFieldType_exec(PyObject *module);

#endif