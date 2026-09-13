#ifndef PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTSTATUSFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCINSTRUMENTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///合约状态

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcInstrumentStatusField data;
} PyCThostFtdcInstrumentStatusFieldData;

extern PyTypeObject *PyCThostFtdcInstrumentStatusFieldType;
extern int PyCTP_module_add_PyCThostFtdcInstrumentStatusFieldType_exec(PyObject *module);

#endif