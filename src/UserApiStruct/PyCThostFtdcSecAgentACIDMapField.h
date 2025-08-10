#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSECAGENTACIDMAPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSECAGENTACIDMAPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///二级代理操作员银期权限

typedef struct PyCThostFtdcSecAgentACIDMapField {
    PyObject_HEAD
    CThostFtdcSecAgentACIDMapField data;
} PyCThostFtdcSecAgentACIDMapField;

extern PyTypeObject PyCThostFtdcSecAgentACIDMapFieldType;

extern int PyCThostFtdcSecAgentACIDMapFieldType_init(PyObject *module);

#endif
