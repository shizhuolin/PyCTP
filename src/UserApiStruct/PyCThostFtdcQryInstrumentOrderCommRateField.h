#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTORDERCOMMRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTORDERCOMMRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInstrumentOrderCommRateField {
    PyObject_HEAD
    CThostFtdcQryInstrumentOrderCommRateField data;
} PyCThostFtdcQryInstrumentOrderCommRateField;

extern PyTypeObject PyCThostFtdcQryInstrumentOrderCommRateFieldType;

extern int PyCThostFtdcQryInstrumentOrderCommRateFieldType_init(PyObject *module);

#endif
