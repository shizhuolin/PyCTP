#ifndef PYCTP_TYPES_PYCTHOSTFTDCSPECIFICINSTRUMENTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCSPECIFICINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///指定的合约

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcSpecificInstrumentField data;
} PyCThostFtdcSpecificInstrumentFieldData;

extern PyTypeObject *PyCThostFtdcSpecificInstrumentFieldType;
extern int PyCTP_module_add_PyCThostFtdcSpecificInstrumentFieldType_exec(PyObject *module);

#endif