#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYINVESTORFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资者

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryInvestorField data;
} PyCThostFtdcQryInvestorFieldData;

extern PyTypeObject *PyCThostFtdcQryInvestorFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryInvestorFieldType_exec(PyObject *module);

#endif