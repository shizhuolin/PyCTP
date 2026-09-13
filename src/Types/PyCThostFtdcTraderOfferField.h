#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADEROFFERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADEROFFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所交易员报盘机

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTraderOfferField data;
} PyCThostFtdcTraderOfferFieldData;

extern PyTypeObject *PyCThostFtdcTraderOfferFieldType;
extern int PyCTP_module_add_PyCThostFtdcTraderOfferFieldType_exec(PyObject *module);

#endif