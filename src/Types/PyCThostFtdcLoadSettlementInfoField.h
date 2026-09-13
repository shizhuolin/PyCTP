#ifndef PYCTP_TYPES_PYCTHOSTFTDCLOADSETTLEMENTINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCLOADSETTLEMENTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///装载结算信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcLoadSettlementInfoField data;
} PyCThostFtdcLoadSettlementInfoFieldData;

extern PyTypeObject *PyCThostFtdcLoadSettlementInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcLoadSettlementInfoFieldType_exec(PyObject *module);

#endif