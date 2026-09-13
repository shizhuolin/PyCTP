#ifndef PYCTP_TYPES_PYCTHOSTFTDCSPBMINVESTORPORTFDEFFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSPBMINVESTORPORTFDEFFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者套餐选择

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSPBMInvestorPortfDefField data;
} PyCThostFtdcSPBMInvestorPortfDefFieldData;

extern PyTypeObject *PyCThostFtdcSPBMInvestorPortfDefFieldType;
extern int PyCTP_module_add_PyCThostFtdcSPBMInvestorPortfDefFieldType_exec(PyObject *module);

#endif