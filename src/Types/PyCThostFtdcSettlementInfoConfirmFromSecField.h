#ifndef PYCTP_TYPES_PYCTHOSTFTDCSETTLEMENTINFOCONFIRMFROMSECFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSETTLEMENTINFOCONFIRMFROMSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///来自次席的结算结果确认

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSettlementInfoConfirmFromSecField data;
} PyCThostFtdcSettlementInfoConfirmFromSecFieldData;

extern PyTypeObject *PyCThostFtdcSettlementInfoConfirmFromSecFieldType;
extern int PyCTP_module_add_PyCThostFtdcSettlementInfoConfirmFromSecFieldType_exec(PyObject *module);

#endif