#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEV1FIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADINGACCOUNTPASSWORDUPDATEV1FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///资金账户口令变更域

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTradingAccountPasswordUpdateV1Field data;
} PyCThostFtdcTradingAccountPasswordUpdateV1FieldData;

extern PyTypeObject *PyCThostFtdcTradingAccountPasswordUpdateV1FieldType;
extern int PyCTP_module_add_PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_exec(PyObject *module);

#endif