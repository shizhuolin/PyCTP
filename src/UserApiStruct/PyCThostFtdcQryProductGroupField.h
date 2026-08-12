#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPRODUCTGROUPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYPRODUCTGROUPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询产品组

typedef struct PyCThostFtdcQryProductGroupField {
    PyObject_HEAD
    CThostFtdcQryProductGroupField data;
} PyCThostFtdcQryProductGroupField;

extern PyTypeObject PyCThostFtdcQryProductGroupFieldType;

extern int PyCThostFtdcQryProductGroupFieldType_init(PyObject *module);

#endif
