#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPRODUCTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPRODUCTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询产品

typedef struct PyCThostFtdcQryProductField {
    PyObject_HEAD
    CThostFtdcQryProductField data;
} PyCThostFtdcQryProductField;

extern PyTypeObject PyCThostFtdcQryProductFieldType;

extern int PyCThostFtdcQryProductFieldType_init(PyObject *module);

#endif
