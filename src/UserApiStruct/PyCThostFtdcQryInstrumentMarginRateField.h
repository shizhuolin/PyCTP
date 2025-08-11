#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTMARGINRATEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTMARGINRATEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInstrumentMarginRateField {
    PyObject_HEAD
    CThostFtdcQryInstrumentMarginRateField data;
} PyCThostFtdcQryInstrumentMarginRateField;

extern PyTypeObject PyCThostFtdcQryInstrumentMarginRateFieldType;

extern int PyCThostFtdcQryInstrumentMarginRateFieldType_init(PyObject *module);

#endif
