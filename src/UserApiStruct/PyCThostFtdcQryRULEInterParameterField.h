#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRULEINTERPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRULEINTERPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RULE跨品种抵扣参数查询

typedef struct PyCThostFtdcQryRULEInterParameterField {
    PyObject_HEAD
    CThostFtdcQryRULEInterParameterField data;
} PyCThostFtdcQryRULEInterParameterField;

extern PyTypeObject PyCThostFtdcQryRULEInterParameterFieldType;

extern int PyCThostFtdcQryRULEInterParameterFieldType_init(PyObject *module);

#endif
