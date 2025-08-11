#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONINSTRTRADINGRIGHTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYOPTIONINSTRTRADINGRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryOptionInstrTradingRightField {
    PyObject_HEAD
    CThostFtdcQryOptionInstrTradingRightField data;
} PyCThostFtdcQryOptionInstrTradingRightField;

extern PyTypeObject PyCThostFtdcQryOptionInstrTradingRightFieldType;

extern int PyCThostFtdcQryOptionInstrTradingRightFieldType_init(PyObject *module);

#endif
