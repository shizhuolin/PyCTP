#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询合约

typedef struct PyCThostFtdcQryInstrumentField {
    PyObject_HEAD
    CThostFtdcQryInstrumentField data;
} PyCThostFtdcQryInstrumentField;

extern PyTypeObject PyCThostFtdcQryInstrumentFieldType;

extern int PyCThostFtdcQryInstrumentFieldType_init(PyObject *module);

#endif
