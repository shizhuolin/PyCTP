#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSETTLEMENTINFOCONFIRMFROMSECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSETTLEMENTINFOCONFIRMFROMSECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///来自次席的结算结果确认

typedef struct PyCThostFtdcSettlementInfoConfirmFromSecField {
    PyObject_HEAD
    CThostFtdcSettlementInfoConfirmFromSecField data;
} PyCThostFtdcSettlementInfoConfirmFromSecField;

extern PyTypeObject PyCThostFtdcSettlementInfoConfirmFromSecFieldType;

extern int PyCThostFtdcSettlementInfoConfirmFromSecFieldType_init(PyObject *module);

#endif
