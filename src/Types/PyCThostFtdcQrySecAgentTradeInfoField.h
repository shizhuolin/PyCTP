#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSECAGENTTRADEINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSECAGENTTRADEINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询二级代理商信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySecAgentTradeInfoField data;
} PyCThostFtdcQrySecAgentTradeInfoFieldData;

extern PyTypeObject *PyCThostFtdcQrySecAgentTradeInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySecAgentTradeInfoFieldType_exec(PyObject *module);

#endif