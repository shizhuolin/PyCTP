#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTUNITFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTUNITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资单元

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestUnitField data;
} PyCThostFtdcQryInvestUnitFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestUnitFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestUnitFieldType_exec(PyObject *module);

#endif