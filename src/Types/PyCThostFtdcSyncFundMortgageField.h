#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCFUNDMORTGAGEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCFUNDMORTGAGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///货币质押同步

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncFundMortgageField data;
} PyCThostFtdcSyncFundMortgageFieldData;

extern PyTypeObject *PyCThostFtdcSyncFundMortgageFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncFundMortgageFieldType_exec(PyObject *module);

#endif