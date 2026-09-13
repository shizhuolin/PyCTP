#ifndef PYCTP_TYPES_PYCTHOSTFTDCSYNCINGINVESTORGROUPFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSYNCINGINVESTORGROUPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///正在同步中的投资者分组

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSyncingInvestorGroupField data;
} PyCThostFtdcSyncingInvestorGroupFieldData;

extern PyTypeObject *PyCThostFtdcSyncingInvestorGroupFieldType;
extern int PyCTP_module_add_PyCThostFtdcSyncingInvestorGroupFieldType_exec(PyObject *module);

#endif