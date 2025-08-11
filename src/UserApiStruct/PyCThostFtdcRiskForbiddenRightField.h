#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRISKFORBIDDENRIGHTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRISKFORBIDDENRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRiskForbiddenRightField {
    PyObject_HEAD
    CThostFtdcRiskForbiddenRightField data;
} PyCThostFtdcRiskForbiddenRightField;

extern PyTypeObject PyCThostFtdcRiskForbiddenRightFieldType;

extern int PyCThostFtdcRiskForbiddenRightFieldType_init(PyObject *module);

#endif
