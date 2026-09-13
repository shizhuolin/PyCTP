#ifndef PYCTP_TYPES_PYCTHOSTFTDCNOTIFYQUERYFUTUREACCOUNTBYSECFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCNOTIFYQUERYFUTUREACCOUNTBYSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询银行资金帐户信息通知 要发往次席

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcNotifyQueryFutureAccountBySecField data;
} PyCThostFtdcNotifyQueryFutureAccountBySecFieldData;

extern PyTypeObject *PyCThostFtdcNotifyQueryFutureAccountBySecFieldType;
extern int PyCTP_module_add_PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_exec(PyObject *module);

#endif