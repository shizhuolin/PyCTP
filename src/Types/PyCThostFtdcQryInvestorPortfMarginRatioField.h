#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPORTFMARGINRATIOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORPORTFMARGINRATIOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者新型组合保证金系数查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorPortfMarginRatioField data;
} PyCThostFtdcQryInvestorPortfMarginRatioFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorPortfMarginRatioFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorPortfMarginRatioFieldType_exec(PyObject *module);

#endif