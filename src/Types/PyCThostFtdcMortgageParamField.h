#ifndef PYCTP_TYPES_PYCTHOSTFTDCMORTGAGEPARAMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMORTGAGEPARAMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///质押配比参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMortgageParamField data;
} PyCThostFtdcMortgageParamFieldData;

extern PyTypeObject *PyCThostFtdcMortgageParamFieldType;
extern int PyCTP_module_add_PyCThostFtdcMortgageParamFieldType_exec(PyObject *module);

#endif