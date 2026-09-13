#ifndef PYCTP_TYPES_PYCTHOSTFTDCFORQUOTEPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCFORQUOTEPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///询价价差参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcForQuoteParamField data;
} PyCThostFtdcForQuoteParamFieldData;

extern PyTypeObject *PyCThostFtdcForQuoteParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcForQuoteParamFieldType_exec(PyObject *module);

#endif