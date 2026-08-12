#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPECIFICINSTRUMENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPECIFICINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///指定的合约

typedef struct PyCThostFtdcSpecificInstrumentField {
    PyObject_HEAD
    CThostFtdcSpecificInstrumentField data;
} PyCThostFtdcSpecificInstrumentField;

extern PyTypeObject PyCThostFtdcSpecificInstrumentFieldType;

extern int PyCThostFtdcSpecificInstrumentFieldType_init(PyObject *module);

#endif
