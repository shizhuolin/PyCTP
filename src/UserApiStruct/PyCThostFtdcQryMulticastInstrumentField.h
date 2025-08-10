#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMULTICASTINSTRUMENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYMULTICASTINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///QryMulticastInstrument

typedef struct PyCThostFtdcQryMulticastInstrumentField {
    PyObject_HEAD
    CThostFtdcQryMulticastInstrumentField data;
} PyCThostFtdcQryMulticastInstrumentField;

extern PyTypeObject PyCThostFtdcQryMulticastInstrumentFieldType;

extern int PyCThostFtdcQryMulticastInstrumentFieldType_init(PyObject *module);

#endif
