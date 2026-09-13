#ifndef PYCTP_TYPES_PYCTHOSTFTDCINVESTORRESERVEINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINVESTORRESERVEINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者预留信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInvestorReserveInfoField data;
} PyCThostFtdcInvestorReserveInfoFieldData;

extern PyTypeObject *PyCThostFtdcInvestorReserveInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcInvestorReserveInfoFieldType_exec(PyObject *module);

#endif