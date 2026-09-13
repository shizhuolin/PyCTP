#ifndef PYCTP_TYPES_PYCTHOSTFTDCRISKFORBIDDENRIGHTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCRISKFORBIDDENRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///风控禁止的合约交易权限

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcRiskForbiddenRightField data;
} PyCThostFtdcRiskForbiddenRightFieldData;

extern PyTypeObject *PyCThostFtdcRiskForbiddenRightFieldType;
extern int PyCTP_module_add_PyCThostFtdcRiskForbiddenRightFieldType_exec(PyObject *module);

#endif