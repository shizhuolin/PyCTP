#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYSETTLEMENTINFOCONFIRMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYSETTLEMENTINFOCONFIRMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询结算信息确认域

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQrySettlementInfoConfirmField data;
} PyCThostFtdcQrySettlementInfoConfirmFieldData;

extern PyTypeObject *PyCThostFtdcQrySettlementInfoConfirmFieldType;
extern int PyCTP_module_add_PyCThostFtdcQrySettlementInfoConfirmFieldType_exec(PyObject *module);

#endif