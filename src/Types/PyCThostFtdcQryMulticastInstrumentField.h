#ifndef PYCTP_TYPES_PYCTHOSTFTDCQRYMULTICASTINSTRUMENTFIELD_H
#define PYCTP_TYPES_PYCTHOSTFTDCQRYMULTICASTINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///QryMulticastInstrument

typedef struct {
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    PyObject_HEAD
#endif // PY_VERSION_HEX
    CThostFtdcQryMulticastInstrumentField data;
} PyCThostFtdcQryMulticastInstrumentFieldData;

extern PyTypeObject *PyCThostFtdcQryMulticastInstrumentFieldType;
extern int PyCTP_module_add_PyCThostFtdcQryMulticastInstrumentFieldType_exec(PyObject *module);

#endif