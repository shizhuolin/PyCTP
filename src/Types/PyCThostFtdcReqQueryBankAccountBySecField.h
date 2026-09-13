#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQQUERYBANKACCOUNTBYSECFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQQUERYBANKACCOUNTBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///次席查询银行资金帐户信息请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqQueryBankAccountBySecField data;
} PyCThostFtdcReqQueryBankAccountBySecFieldData;

extern PyTypeObject *PyCThostFtdcReqQueryBankAccountBySecFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqQueryBankAccountBySecFieldType_exec(PyObject *module);

#endif