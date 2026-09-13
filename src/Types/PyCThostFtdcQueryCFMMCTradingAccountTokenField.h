#ifndef PYCTP_TYPES_PYCTHOSTFTDCQUERYCFMMCTRADINGACCOUNTTOKENFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQUERYCFMMCTRADINGACCOUNTTOKENFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询监控中心用户令牌

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQueryCFMMCTradingAccountTokenField data;
} PyCThostFtdcQueryCFMMCTradingAccountTokenFieldData;

extern PyTypeObject *PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType;
extern int PyCTP_module_add_PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_exec(PyObject *module);

#endif