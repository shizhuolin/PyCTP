#ifndef PYCTP_TYPES_PYCTHOSTFTDCCFMMCTRADINGACCOUNTTOKENFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCCFMMCTRADINGACCOUNTTOKENFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///监控中心用户令牌

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcCFMMCTradingAccountTokenField data;
} PyCThostFtdcCFMMCTradingAccountTokenFieldData;

extern PyTypeObject *PyCThostFtdcCFMMCTradingAccountTokenFieldType;
extern int PyCTP_module_add_PyCThostFtdcCFMMCTradingAccountTokenFieldType_exec(PyObject *module);

#endif