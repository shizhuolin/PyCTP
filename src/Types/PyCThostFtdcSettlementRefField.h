#ifndef PYCTP_TYPES_PYCTHOSTFTDCSETTLEMENTREFFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSETTLEMENTREFFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///结算引用

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSettlementRefField data;
} PyCThostFtdcSettlementRefFieldData;

extern PyTypeObject *PyCThostFtdcSettlementRefFieldType;
extern int PyCTP_module_add_PyCThostFtdcSettlementRefFieldType_exec(PyObject *module);

#endif