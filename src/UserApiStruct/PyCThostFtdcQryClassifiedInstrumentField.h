#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCLASSIFIEDINSTRUMENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCLASSIFIEDINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryClassifiedInstrumentField {
    PyObject_HEAD
    CThostFtdcQryClassifiedInstrumentField data;
} PyCThostFtdcQryClassifiedInstrumentField;

extern PyTypeObject PyCThostFtdcQryClassifiedInstrumentFieldType;

extern int PyCThostFtdcQryClassifiedInstrumentFieldType_init(PyObject *module);

#endif
