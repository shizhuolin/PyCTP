#ifndef PYCTP_TYPES_PYCTHOSTFTDCMDTRADEROFFERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMDTRADEROFFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所行情报盘机

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMDTraderOfferField data;
} PyCThostFtdcMDTraderOfferFieldData;

extern PyTypeObject *PyCThostFtdcMDTraderOfferFieldType;
extern int PyCTP_module_add_PyCThostFtdcMDTraderOfferFieldType_exec(PyObject *module);

#endif