#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS品种内风险对冲参数

typedef struct PyCThostFtdcRCAMSIntraParameterField {
    PyObject_HEAD
    CThostFtdcRCAMSIntraParameterField data;
} PyCThostFtdcRCAMSIntraParameterField;

extern PyTypeObject PyCThostFtdcRCAMSIntraParameterFieldType;

extern int PyCThostFtdcRCAMSIntraParameterFieldType_init(PyObject *module);

#endif
