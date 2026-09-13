#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYTRADEROFFERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYTRADEROFFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易员报盘机

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryTraderOfferField data;
} PyCThostFtdcQryTraderOfferFieldData;

extern PyTypeObject *PyCThostFtdcQryTraderOfferFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryTraderOfferFieldType_exec(PyObject *module);

#endif