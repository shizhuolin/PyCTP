#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRISKFORBIDDENRIGHTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRISKFORBIDDENRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风控禁止的合约交易权限

typedef struct PyCThostFtdcRiskForbiddenRightField {
    PyObject_HEAD
    CThostFtdcRiskForbiddenRightField data;
} PyCThostFtdcRiskForbiddenRightField;

extern PyTypeObject PyCThostFtdcRiskForbiddenRightFieldType;

extern int PyCThostFtdcRiskForbiddenRightFieldType_init(PyObject *module);

#endif
