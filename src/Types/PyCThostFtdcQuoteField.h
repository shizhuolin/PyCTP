#ifndef PYCTP_TYPES_PYCTHOSTFTDCQUOTEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///报价

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQuoteField data;
} PyCThostFtdcQuoteFieldData;

extern PyTypeObject *PyCThostFtdcQuoteFieldType;
extern int PyCTP_module_add_PyCThostFtdcQuoteFieldType_exec(PyObject *module);

#endif