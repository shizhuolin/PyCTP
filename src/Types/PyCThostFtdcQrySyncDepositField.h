#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSYNCDEPOSITFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSYNCDEPOSITFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询出入金流水

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySyncDepositField data;
} PyCThostFtdcQrySyncDepositFieldData;

extern PyTypeObject *PyCThostFtdcQrySyncDepositFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySyncDepositFieldType_exec(PyObject *module);

#endif