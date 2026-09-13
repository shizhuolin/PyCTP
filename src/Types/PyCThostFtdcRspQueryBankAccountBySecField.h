#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPQUERYBANKACCOUNTBYSECFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPQUERYBANKACCOUNTBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///次席查询银行资金帐户信息回报

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspQueryBankAccountBySecField data;
} PyCThostFtdcRspQueryBankAccountBySecFieldData;

extern PyTypeObject *PyCThostFtdcRspQueryBankAccountBySecFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspQueryBankAccountBySecFieldType_exec(PyObject *module);

#endif