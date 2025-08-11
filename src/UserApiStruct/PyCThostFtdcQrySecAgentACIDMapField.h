#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTACIDMAPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTACIDMAPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySecAgentACIDMapField {
    PyObject_HEAD
    CThostFtdcQrySecAgentACIDMapField data;
} PyCThostFtdcQrySecAgentACIDMapField;

extern PyTypeObject PyCThostFtdcQrySecAgentACIDMapFieldType;

extern int PyCThostFtdcQrySecAgentACIDMapFieldType_init(PyObject *module);

#endif
