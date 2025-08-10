#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMPORTFDEFINITIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSYNCDELTASPBMPORTFDEFINITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM组合保证金套餐

typedef struct PyCThostFtdcSyncDeltaSPBMPortfDefinitionField {
    PyObject_HEAD
    CThostFtdcSyncDeltaSPBMPortfDefinitionField data;
} PyCThostFtdcSyncDeltaSPBMPortfDefinitionField;

extern PyTypeObject PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType;

extern int PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_init(PyObject *module);

#endif
