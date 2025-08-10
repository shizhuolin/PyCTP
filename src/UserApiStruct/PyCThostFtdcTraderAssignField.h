#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADERASSIGNFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADERASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///席位与交易中心对应关系

typedef struct PyCThostFtdcTraderAssignField {
    PyObject_HEAD
    CThostFtdcTraderAssignField data;
} PyCThostFtdcTraderAssignField;

extern PyTypeObject PyCThostFtdcTraderAssignFieldType;

extern int PyCThostFtdcTraderAssignFieldType_init(PyObject *module);

#endif
