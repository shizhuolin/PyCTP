#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTTRADINGRIGHTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryInstrumentTradingRightField {
    PyObject_HEAD
    CThostFtdcQryInstrumentTradingRightField data;
} PyCThostFtdcQryInstrumentTradingRightField;

extern PyTypeObject PyCThostFtdcQryInstrumentTradingRightFieldType;

extern int PyCThostFtdcQryInstrumentTradingRightFieldType_init(PyObject *module);

#endif
