#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTACIDMAPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTACIDMAPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///二级代理操作员银期权限查询

typedef struct PyCThostFtdcQrySecAgentACIDMapField {
    PyObject_HEAD
    CThostFtdcQrySecAgentACIDMapField data;
} PyCThostFtdcQrySecAgentACIDMapField;

extern PyTypeObject PyCThostFtdcQrySecAgentACIDMapFieldType;

extern int PyCThostFtdcQrySecAgentACIDMapFieldType_init(PyObject *module);

#endif
