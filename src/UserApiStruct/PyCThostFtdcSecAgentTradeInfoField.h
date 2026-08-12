#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSECAGENTTRADEINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSECAGENTTRADEINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///二级代理商信息

typedef struct PyCThostFtdcSecAgentTradeInfoField {
    PyObject_HEAD
    CThostFtdcSecAgentTradeInfoField data;
} PyCThostFtdcSecAgentTradeInfoField;

extern PyTypeObject PyCThostFtdcSecAgentTradeInfoFieldType;

extern int PyCThostFtdcSecAgentTradeInfoFieldType_init(PyObject *module);

#endif
