#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTFORQUOTEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTFORQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入的询价

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputForQuoteField data;
} PyCThostFtdcInputForQuoteFieldData;

extern PyTypeObject *PyCThostFtdcInputForQuoteFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputForQuoteFieldType_exec(PyObject *module);

#endif