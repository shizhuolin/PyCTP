#ifndef PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTTRADINGRIGHTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者合约交易权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInstrumentTradingRightField data;
} PyCThostFtdcInstrumentTradingRightFieldData;

extern PyTypeObject *PyCThostFtdcInstrumentTradingRightFieldType;
extern int PyCTP_module_add_PyCThostFtdcInstrumentTradingRightFieldType_exec(PyObject *module);

#endif