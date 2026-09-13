#ifndef PYCTP_TYPES_PYCTHOSTFTDCTRADERFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCTRADERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///交易所交易员

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcTraderField data;
} PyCThostFtdcTraderFieldData;

extern PyTypeObject *PyCThostFtdcTraderFieldType;
extern int PyCTP_module_add_PyCThostFtdcTraderFieldType_exec(PyObject *module);

#endif