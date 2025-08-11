#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADERASSIGNFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADERASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTraderAssignField {
    PyObject_HEAD
    CThostFtdcTraderAssignField data;
} PyCThostFtdcTraderAssignField;

extern PyTypeObject PyCThostFtdcTraderAssignFieldType;

extern int PyCThostFtdcTraderAssignFieldType_init(PyObject *module);

#endif
