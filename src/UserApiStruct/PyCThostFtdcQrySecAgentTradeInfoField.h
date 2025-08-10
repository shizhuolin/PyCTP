#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTTRADEINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTTRADEINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询二级代理商信息

typedef struct PyCThostFtdcQrySecAgentTradeInfoField {
    PyObject_HEAD
    CThostFtdcQrySecAgentTradeInfoField data;
} PyCThostFtdcQrySecAgentTradeInfoField;

extern PyTypeObject PyCThostFtdcQrySecAgentTradeInfoFieldType;

extern int PyCThostFtdcQrySecAgentTradeInfoFieldType_init(PyObject *module);

#endif
