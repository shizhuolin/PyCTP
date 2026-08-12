#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADERASSIGNFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADERASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///席位与交易中心对应关系维护查询

typedef struct PyCThostFtdcQryTraderAssignField {
    PyObject_HEAD
    CThostFtdcQryTraderAssignField data;
} PyCThostFtdcQryTraderAssignField;

extern PyTypeObject PyCThostFtdcQryTraderAssignFieldType;

extern int PyCThostFtdcQryTraderAssignFieldType_init(PyObject *module);

#endif
