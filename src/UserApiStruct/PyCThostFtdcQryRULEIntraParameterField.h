#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRULEINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRULEINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE品种内对锁仓折扣参数查询

typedef struct PyCThostFtdcQryRULEIntraParameterField {
    PyObject_HEAD
    CThostFtdcQryRULEIntraParameterField data;
} PyCThostFtdcQryRULEIntraParameterField;

extern PyTypeObject PyCThostFtdcQryRULEIntraParameterFieldType;

extern int PyCThostFtdcQryRULEIntraParameterFieldType_init(PyObject *module);

#endif
