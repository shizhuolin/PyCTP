#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMINTRAPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMINTRAPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM品种内对锁仓折扣参数查询

typedef struct PyCThostFtdcQrySPBMIntraParameterField {
    PyObject_HEAD
    CThostFtdcQrySPBMIntraParameterField data;
} PyCThostFtdcQrySPBMIntraParameterField;

extern PyTypeObject PyCThostFtdcQrySPBMIntraParameterFieldType;

extern int PyCThostFtdcQrySPBMIntraParameterFieldType_init(PyObject *module);

#endif
