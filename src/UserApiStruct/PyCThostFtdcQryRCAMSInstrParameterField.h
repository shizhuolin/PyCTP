#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSINSTRPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS同合约风险对冲参数查询

typedef struct PyCThostFtdcQryRCAMSInstrParameterField {
    PyObject_HEAD
    CThostFtdcQryRCAMSInstrParameterField data;
} PyCThostFtdcQryRCAMSInstrParameterField;

extern PyTypeObject PyCThostFtdcQryRCAMSInstrParameterFieldType;

extern int PyCThostFtdcQryRCAMSInstrParameterFieldType_init(PyObject *module);

#endif
