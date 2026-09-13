#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSECAGENTACIDMAPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSECAGENTACIDMAPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///二级代理操作员银期权限查询

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySecAgentACIDMapField data;
} PyCThostFtdcQrySecAgentACIDMapFieldData;

extern PyTypeObject *PyCThostFtdcQrySecAgentACIDMapFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySecAgentACIDMapFieldType_exec(PyObject *module);

#endif