#ifndef PYCTP_TYPES_PYCTHOSTFTDCREQQUERYTRADERESULTBYSERIALFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCREQQUERYTRADERESULTBYSERIALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询指定流水号的交易结果请求

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcReqQueryTradeResultBySerialField data;
} PyCThostFtdcReqQueryTradeResultBySerialFieldData;

extern PyTypeObject *PyCThostFtdcReqQueryTradeResultBySerialFieldType;
extern int PyCTP_module_add_PyCThostFtdcReqQueryTradeResultBySerialFieldType_exec(PyObject *module);

#endif