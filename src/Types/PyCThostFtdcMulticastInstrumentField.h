#ifndef PYCTP_TYPES_PYCTHOSTFTDCMULTICASTINSTRUMENTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCMULTICASTINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///MulticastInstrument

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcMulticastInstrumentField data;
} PyCThostFtdcMulticastInstrumentFieldData;

extern PyTypeObject *PyCThostFtdcMulticastInstrumentFieldType;
extern int PyCTP_module_add_PyCThostFtdcMulticastInstrumentFieldType_exec(PyObject *module);

#endif