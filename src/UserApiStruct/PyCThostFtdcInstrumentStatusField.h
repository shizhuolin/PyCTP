#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINSTRUMENTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///合约状态

typedef struct PyCThostFtdcInstrumentStatusField {
    PyObject_HEAD
    CThostFtdcInstrumentStatusField data;
} PyCThostFtdcInstrumentStatusField;

extern PyTypeObject PyCThostFtdcInstrumentStatusFieldType;

extern int PyCThostFtdcInstrumentStatusFieldType_init(PyObject *module);

#endif
