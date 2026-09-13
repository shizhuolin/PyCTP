#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMPORTFDEFINITIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSPBMPORTFDEFINITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合保证金套餐查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySPBMPortfDefinitionField data;
} PyCThostFtdcQrySPBMPortfDefinitionFieldData;

extern PyTypeObject *PyCThostFtdcQrySPBMPortfDefinitionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySPBMPortfDefinitionFieldType_exec(PyObject *module);

#endif