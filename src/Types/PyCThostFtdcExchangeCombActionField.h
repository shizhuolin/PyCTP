#ifndef PYCTP_TYPES_PYCTHOSTFTDCEXCHANGECOMBACTIONFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCEXCHANGECOMBACTIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所申请组合信息

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcExchangeCombActionField data;
} PyCThostFtdcExchangeCombActionFieldData;

extern PyTypeObject *PyCThostFtdcExchangeCombActionFieldType;
extern int PyCTP_module_add_PyCThostFtdcExchangeCombActionFieldType_exec(PyObject *module);

#endif