#ifndef PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///合约

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInstrumentField data;
} PyCThostFtdcInstrumentFieldData;

extern PyTypeObject *PyCThostFtdcInstrumentFieldType;
extern int PyCTP_module_add_PyCThostFtdcInstrumentFieldType_exec(PyObject *module);

#endif