#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMPORTFDEFINITIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCDELTASPBMPORTFDEFINITIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风险结算追平SPBM组合保证金套餐

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncDeltaSPBMPortfDefinitionField data;
} PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldData;

extern PyTypeObject *PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncDeltaSPBMPortfDefinitionFieldType_exec(PyObject *module);

#endif