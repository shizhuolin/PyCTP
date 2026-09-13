#ifndef PYCTP_TYPES_PYCTHOSTFTDCSECAGENTCHECKMODEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSECAGENTCHECKMODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///二级代理商资金校验模式

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSecAgentCheckModeField data;
} PyCThostFtdcSecAgentCheckModeFieldData;

extern PyTypeObject *PyCThostFtdcSecAgentCheckModeFieldType;
extern int PyCTP_module_add_PyCThostFtdcSecAgentCheckModeFieldType_exec(PyObject *module);

#endif