#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYOPTIONINSTRTRADINGRIGHTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYOPTIONINSTRTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询期权合约交易权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryOptionInstrTradingRightField data;
} PyCThostFtdcQryOptionInstrTradingRightFieldData;

extern PyTypeObject *PyCThostFtdcQryOptionInstrTradingRightFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryOptionInstrTradingRightFieldType_exec(PyObject *module);

#endif