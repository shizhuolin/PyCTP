#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORPORTFMARGINRATIOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORPORTFMARGINRATIOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者新型组合保证金系数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorPortfMarginRatioField data;
} PyCThostFtdcInvestorPortfMarginRatioFieldData;

extern PyTypeObject *PyCThostFtdcInvestorPortfMarginRatioFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorPortfMarginRatioFieldType_exec(PyObject *module);

#endif