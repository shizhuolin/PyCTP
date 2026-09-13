#ifndef PYCTP_TYPES_PYCTHOSTFTDCOPTIONINSTRTRADINGRIGHTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCOPTIONINSTRTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者期权合约交易权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcOptionInstrTradingRightField data;
} PyCThostFtdcOptionInstrTradingRightFieldData;

extern PyTypeObject *PyCThostFtdcOptionInstrTradingRightFieldType;
extern int PyCTP_module_add_PyCThostFtdcOptionInstrTradingRightFieldType_exec(PyObject *module);

#endif