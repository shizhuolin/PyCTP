#ifndef PYCTP_TYPES_PYCTHOSTFTDCPRODUCTGROUPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCPRODUCTGROUPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者品种/跨品种保证金产品组

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcProductGroupField data;
} PyCThostFtdcProductGroupFieldData;

extern PyTypeObject *PyCThostFtdcProductGroupFieldType;
extern int PyCTP_module_add_PyCThostFtdcProductGroupFieldType_exec(PyObject *module);

#endif