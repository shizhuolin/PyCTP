#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYCONTRACTBANKFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYCONTRACTBANKFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询签约银行请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryContractBankField data;
} PyCThostFtdcQryContractBankFieldData;

extern PyTypeObject *PyCThostFtdcQryContractBankFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryContractBankFieldType_exec(PyObject *module);

#endif