#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRULEINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRULEINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE品种内对锁仓折扣参数

typedef struct PyCThostFtdcRULEIntraParameterField {
    PyObject_HEAD
    CThostFtdcRULEIntraParameterField data;
} PyCThostFtdcRULEIntraParameterField;

extern PyTypeObject PyCThostFtdcRULEIntraParameterFieldType;

extern int PyCThostFtdcRULEIntraParameterFieldType_init(PyObject *module);

#endif
