#ifndef PYCTP_TYPES_PYCTHOSTFTDCRSPQUERYTRADERESULTBYSERIALFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRSPQUERYTRADERESULTBYSERIALFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询指定流水号的交易结果响应

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRspQueryTradeResultBySerialField data;
} PyCThostFtdcRspQueryTradeResultBySerialFieldData;

extern PyTypeObject *PyCThostFtdcRspQueryTradeResultBySerialFieldType;
extern int PyCTP_module_add_PyCThostFtdcRspQueryTradeResultBySerialFieldType_exec(PyObject *module);

#endif