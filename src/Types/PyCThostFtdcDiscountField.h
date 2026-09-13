#ifndef PYCTP_TYPES_PYCTHOSTFTDCDISCOUNTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCDISCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///会员资金折扣

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcDiscountField data;
} PyCThostFtdcDiscountFieldData;

extern PyTypeObject *PyCThostFtdcDiscountFieldType;
extern int PyCTP_module_add_PyCThostFtdcDiscountFieldType_exec(PyObject *module);

#endif