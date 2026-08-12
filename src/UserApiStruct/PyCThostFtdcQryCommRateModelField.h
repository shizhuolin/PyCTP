#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMMRATEMODELFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMMRATEMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///请求查询投资者手续费率模板

typedef struct PyCThostFtdcQryCommRateModelField {
    PyObject_HEAD
    CThostFtdcQryCommRateModelField data;
} PyCThostFtdcQryCommRateModelField;

extern PyTypeObject PyCThostFtdcQryCommRateModelFieldType;

extern int PyCThostFtdcQryCommRateModelFieldType_init(PyObject *module);

#endif
