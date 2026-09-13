#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEBATCHORDERACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGEBATCHORDERACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所批量报单操作

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeBatchOrderActionField data;
} PyCThostFtdcExchangeBatchOrderActionFieldData;

extern PyTypeObject *PyCThostFtdcExchangeBatchOrderActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeBatchOrderActionFieldType_exec(PyObject *module);

#endif