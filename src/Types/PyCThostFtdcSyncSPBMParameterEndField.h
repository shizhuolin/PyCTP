#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCSPBMPARAMETERENDFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCSPBMPARAMETERENDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///同步SPBM参数结束

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncSPBMParameterEndField data;
} PyCThostFtdcSyncSPBMParameterEndFieldData;

extern PyTypeObject *PyCThostFtdcSyncSPBMParameterEndFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncSPBMParameterEndFieldType_exec(PyObject *module);

#endif