#ifndef PYCTP_TYPES_PYCTHOSTFTDCSPBMPORTFDEFINITIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSPBMPORTFDEFINITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合保证金套餐

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSPBMPortfDefinitionField data;
} PyCThostFtdcSPBMPortfDefinitionFieldData;

extern PyTypeObject *PyCThostFtdcSPBMPortfDefinitionFieldType;
extern int PyCTP_module_add_PyCThostFtdcSPBMPortfDefinitionFieldType_exec(PyObject *module);

#endif