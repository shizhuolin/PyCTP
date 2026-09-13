#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSETTLEMENTINFOFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSETTLEMENTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询投资者结算结果

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySettlementInfoField data;
} PyCThostFtdcQrySettlementInfoFieldData;

extern PyTypeObject *PyCThostFtdcQrySettlementInfoFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySettlementInfoFieldType_exec(PyObject *module);

#endif