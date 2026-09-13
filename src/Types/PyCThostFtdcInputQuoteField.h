#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTQUOTEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入的报价

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputQuoteField data;
} PyCThostFtdcInputQuoteFieldData;

extern PyTypeObject *PyCThostFtdcInputQuoteFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputQuoteFieldType_exec(PyObject *module);

#endif