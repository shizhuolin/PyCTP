#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMOPTIONPARAMETERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMOPTIONPARAMETERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM期权合约保证金参数

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaSPBMOptionParameterField data;
} PyCThostFtdcSyncDeltaSPBMOptionParameterFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMOptionParameterFieldType_exec(PyObject *module);

#endif