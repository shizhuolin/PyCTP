#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGECOMBACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYEXCHANGECOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所申请组合查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryExchangeCombActionField data;
} PyCThostFtdcQryExchangeCombActionFieldData;

extern PyTypeObject *PyCThostFtdcQryExchangeCombActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryExchangeCombActionFieldType_exec(PyObject *module);

#endif