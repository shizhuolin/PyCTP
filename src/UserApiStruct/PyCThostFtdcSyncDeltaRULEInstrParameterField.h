#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARULEINSTRPARAMETERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTARULEINSTRPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平RULE合约保证金参数

typedef struct PyCThostFtdcSyncDeltaRULEInstrParameterField {
    PyObject_HEAD
    CThostFtdcSyncDeltaRULEInstrParameterField data;
} PyCThostFtdcSyncDeltaRULEInstrParameterField;

extern PyTypeObject PyCThostFtdcSyncDeltaRULEInstrParameterFieldType;

extern int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_init(PyObject *module);

#endif
