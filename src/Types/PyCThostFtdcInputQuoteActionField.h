#ifndef PYCTP_TYPES_PYCTHOSTFTDCINPUTQUOTEACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINPUTQUOTEACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///输入报价操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInputQuoteActionField data;
} PyCThostFtdcInputQuoteActionFieldData;

extern PyTypeObject *PyCThostFtdcInputQuoteActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcInputQuoteActionFieldType_exec(PyObject *module);

#endif