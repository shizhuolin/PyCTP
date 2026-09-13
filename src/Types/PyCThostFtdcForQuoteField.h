#ifndef PYCTP_TYPES_PYCTHOSTFTDCFORQUOTEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCFORQUOTEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///询价

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcForQuoteField data;
} PyCThostFtdcForQuoteFieldData;

extern PyTypeObject *PyCThostFtdcForQuoteFieldType;
extern int PyCTP_module_add_PyCThostFtdcForQuoteFieldType_exec(PyObject *module);

#endif