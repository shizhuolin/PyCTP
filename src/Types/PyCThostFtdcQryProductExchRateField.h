#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYPRODUCTEXCHRATEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYPRODUCTEXCHRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///产品报价汇率查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryProductExchRateField data;
} PyCThostFtdcQryProductExchRateFieldData;

extern PyTypeObject *PyCThostFtdcQryProductExchRateFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryProductExchRateFieldType_exec(PyObject *module);

#endif