#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUERYCFMMCTRADINGACCOUNTTOKENFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQUERYCFMMCTRADINGACCOUNTTOKENFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询监控中心用户令牌

typedef struct PyCThostFtdcQueryCFMMCTradingAccountTokenField {
    PyObject_HEAD
    CThostFtdcQueryCFMMCTradingAccountTokenField data;
} PyCThostFtdcQueryCFMMCTradingAccountTokenField;

extern PyTypeObject PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType;

extern int PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_init(PyObject *module);

#endif
