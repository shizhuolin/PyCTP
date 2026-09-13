#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSECAGENTCHECKMODEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSECAGENTCHECKMODEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询二级代理商资金校验模式

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySecAgentCheckModeField data;
} PyCThostFtdcQrySecAgentCheckModeFieldData;

extern PyTypeObject *PyCThostFtdcQrySecAgentCheckModeFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySecAgentCheckModeFieldType_exec(PyObject *module);

#endif