#ifndef PYCTP_TYPES_PYCTHOSTFTDCSETTLEMENTINFOCONFIRMFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSETTLEMENTINFOCONFIRMFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者结算结果确认信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSettlementInfoConfirmField data;
} PyCThostFtdcSettlementInfoConfirmFieldData;

extern PyTypeObject *PyCThostFtdcSettlementInfoConfirmFieldType;
extern int PyCTP_module_add_PyCThostFtdcSettlementInfoConfirmFieldType_exec(PyObject *module);

#endif