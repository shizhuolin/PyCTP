#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADERASSIGNFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADERASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryTraderAssignField {
    PyObject_HEAD
    CThostFtdcQryTraderAssignField data;
} PyCThostFtdcQryTraderAssignField;

extern PyTypeObject PyCThostFtdcQryTraderAssignFieldType;

extern int PyCThostFtdcQryTraderAssignFieldType_init(PyObject *module);

#endif
