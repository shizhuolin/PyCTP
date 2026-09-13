#ifndef PYCTP_TYPES_PYCTHOSTFTDCSECAGENTTRADEINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSECAGENTTRADEINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///二级代理商信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSecAgentTradeInfoField data;
} PyCThostFtdcSecAgentTradeInfoFieldData;

extern PyTypeObject *PyCThostFtdcSecAgentTradeInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcSecAgentTradeInfoFieldType_exec(PyObject *module);

#endif