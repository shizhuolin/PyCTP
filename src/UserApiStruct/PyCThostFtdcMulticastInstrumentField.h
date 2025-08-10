#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMULTICASTINSTRUMENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCMULTICASTINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///MulticastInstrument

typedef struct PyCThostFtdcMulticastInstrumentField {
    PyObject_HEAD
    CThostFtdcMulticastInstrumentField data;
} PyCThostFtdcMulticastInstrumentField;

extern PyTypeObject PyCThostFtdcMulticastInstrumentFieldType;

extern int PyCThostFtdcMulticastInstrumentFieldType_init(PyObject *module);

#endif
