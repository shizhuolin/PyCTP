#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMARGINMODELFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMARGINMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///请求查询投资者保证金率模板

typedef struct PyCThostFtdcQryMarginModelField {
    PyObject_HEAD
    CThostFtdcQryMarginModelField data;
} PyCThostFtdcQryMarginModelField;

extern PyTypeObject PyCThostFtdcQryMarginModelFieldType;

extern int PyCThostFtdcQryMarginModelFieldType_init(PyObject *module);

#endif
