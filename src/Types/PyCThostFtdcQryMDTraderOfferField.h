#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYMDTRADEROFFERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYMDTRADEROFFERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询行情报盘机

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryMDTraderOfferField data;
} PyCThostFtdcQryMDTraderOfferFieldData;

extern PyTypeObject *PyCThostFtdcQryMDTraderOfferFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryMDTraderOfferFieldType_exec(PyObject *module);

#endif