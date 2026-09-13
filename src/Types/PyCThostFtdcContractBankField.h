#ifndef PYCTP_TYPES_PYCTHOSTFTDCCONTRACTBANKFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCONTRACTBANKFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询签约银行响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcContractBankField data;
} PyCThostFtdcContractBankFieldData;

extern PyTypeObject *PyCThostFtdcContractBankFieldType;
extern int PyCTP_module_add_PyCThostFtdcContractBankFieldType_exec(PyObject *module);

#endif