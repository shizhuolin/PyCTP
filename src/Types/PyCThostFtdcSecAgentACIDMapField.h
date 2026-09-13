#ifndef PYCTP_TYPES_PYCTHOSTFTDCSECAGENTACIDMAPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSECAGENTACIDMAPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///二级代理操作员银期权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSecAgentACIDMapField data;
} PyCThostFtdcSecAgentACIDMapFieldData;

extern PyTypeObject *PyCThostFtdcSecAgentACIDMapFieldType;
extern int PyCTP_module_add_PyCThostFtdcSecAgentACIDMapFieldType_exec(PyObject *module);

#endif