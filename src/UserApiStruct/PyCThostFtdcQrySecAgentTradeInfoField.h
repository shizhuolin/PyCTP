#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTTRADEINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSECAGENTTRADEINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQrySecAgentTradeInfoField {
    PyObject_HEAD
    CThostFtdcQrySecAgentTradeInfoField data;
} PyCThostFtdcQrySecAgentTradeInfoField;

extern PyTypeObject PyCThostFtdcQrySecAgentTradeInfoFieldType;

extern int PyCThostFtdcQrySecAgentTradeInfoFieldType_init(PyObject *module);

#endif
