#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMMRATEMODELFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMMRATEMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者手续费率模板

typedef struct PyCThostFtdcCommRateModelField {
    PyObject_HEAD
    CThostFtdcCommRateModelField data;
} PyCThostFtdcCommRateModelField;

extern PyTypeObject PyCThostFtdcCommRateModelFieldType;

extern int PyCThostFtdcCommRateModelFieldType_init(PyObject *module);

#endif
