#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORPORTFMARGINMODELFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORPORTFMARGINMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///新组保保证金系数投资者模板对应关系

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorPortfMarginModelField data;
} PyCThostFtdcInvestorPortfMarginModelFieldData;

extern PyTypeObject *PyCThostFtdcInvestorPortfMarginModelFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorPortfMarginModelFieldType_exec(PyObject *module);

#endif