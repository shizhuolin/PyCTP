#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTTRADINGRIGHTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINSTRUMENTTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询合约交易权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInstrumentTradingRightField data;
} PyCThostFtdcQryInstrumentTradingRightFieldData;

extern PyTypeObject *PyCThostFtdcQryInstrumentTradingRightFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInstrumentTradingRightFieldType_exec(PyObject *module);

#endif