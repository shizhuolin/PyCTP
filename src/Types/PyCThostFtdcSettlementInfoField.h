#ifndef PYCTP_TYPES_PYCTHOSTFTDCSETTLEMENTINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSETTLEMENTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者结算结果

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSettlementInfoField data;
} PyCThostFtdcSettlementInfoFieldData;

extern PyTypeObject *PyCThostFtdcSettlementInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcSettlementInfoFieldType_exec(PyObject *module);

#endif