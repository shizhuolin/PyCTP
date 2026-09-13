#ifndef PYCTP_TYPES_PYCTHOSTFTDCOPTIONINSTRDELTAFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCOPTIONINSTRDELTAFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///期权合约delta值

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcOptionInstrDeltaField data;
} PyCThostFtdcOptionInstrDeltaFieldData;

extern PyTypeObject *PyCThostFtdcOptionInstrDeltaFieldType;
extern int PyCTP_module_add_PyCThostFtdcOptionInstrDeltaFieldType_exec(PyObject *module);

#endif