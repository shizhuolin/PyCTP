#ifndef PYCTP_TYPES_PYCTHOSTFTDCQUOTEACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQUOTEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报价操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQuoteActionField data;
} PyCThostFtdcQuoteActionFieldData;

extern PyTypeObject *PyCThostFtdcQuoteActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQuoteActionFieldType_exec(PyObject *module);

#endif