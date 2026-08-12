#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMOPTIONPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMOPTIONPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM期权合约保证金参数

typedef struct PyCThostFtdcSyncDeltaSPBMOptionParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPBMOptionParameterField data;
} PyCThostFtdcSyncDeltaSPBMOptionParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType;

extern int PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_init(PyObject *module);

#endif
