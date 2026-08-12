#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS品种内风险对冲参数查询

typedef struct PyCThostFtdcQryRCAMSIntraParameterField {
    PyObject_HEAD
    CThostFtdcQryRCAMSIntraParameterField data;
} PyCThostFtdcQryRCAMSIntraParameterField;

extern PyTypeObject PyCThostFtdcQryRCAMSIntraParameterFieldType;

extern int PyCThostFtdcQryRCAMSIntraParameterFieldType_init(PyObject *module);

#endif
