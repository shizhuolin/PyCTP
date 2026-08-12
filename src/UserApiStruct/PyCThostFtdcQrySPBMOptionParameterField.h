#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMOPTIONPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMOPTIONPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///SPBM期权合约保证金参数查询

typedef struct PyCThostFtdcQrySPBMOptionParameterField {
    PyObject_HEAD
    CThostFtdcQrySPBMOptionParameterField data;
} PyCThostFtdcQrySPBMOptionParameterField;

extern PyTypeObject PyCThostFtdcQrySPBMOptionParameterFieldType;

extern int PyCThostFtdcQrySPBMOptionParameterFieldType_init(PyObject *module);

#endif
