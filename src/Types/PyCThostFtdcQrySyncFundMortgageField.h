#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSYNCFUNDMORTGAGEFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSYNCFUNDMORTGAGEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询货币质押流水

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySyncFundMortgageField data;
} PyCThostFtdcQrySyncFundMortgageFieldData;

extern PyTypeObject *PyCThostFtdcQrySyncFundMortgageFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySyncFundMortgageFieldType_exec(PyObject *module);

#endif