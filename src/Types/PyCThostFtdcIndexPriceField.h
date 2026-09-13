#ifndef PYCTP_TYPES_PYCTHOSTFTDCINDEXPRICEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINDEXPRICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///股指现货指数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcIndexPriceField data;
} PyCThostFtdcIndexPriceFieldData;

extern PyTypeObject *PyCThostFtdcIndexPriceFieldType;
extern int PyCTP_module_add_PyCThostFtdcIndexPriceFieldType_exec(PyObject *module);

#endif