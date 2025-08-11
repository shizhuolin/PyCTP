#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMMRATEMODELFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCCOMMRATEMODELFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcCommRateModelField {
    PyObject_HEAD
    CThostFtdcCommRateModelField data;
} PyCThostFtdcCommRateModelField;

extern PyTypeObject PyCThostFtdcCommRateModelFieldType;

extern int PyCThostFtdcCommRateModelFieldType_init(PyObject *module);

#endif
