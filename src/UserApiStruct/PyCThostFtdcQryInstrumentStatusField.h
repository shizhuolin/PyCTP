#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInstrumentStatusField {
    PyObject_HEAD
    CThostFtdcQryInstrumentStatusField data;
} PyCThostFtdcQryInstrumentStatusField;

extern PyTypeObject PyCThostFtdcQryInstrumentStatusFieldType;

extern int PyCThostFtdcQryInstrumentStatusFieldType_init(PyObject *module);

#endif
