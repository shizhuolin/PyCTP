#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTSTATUSFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINSTRUMENTSTATUSFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询合约状态

typedef struct PyCThostFtdcQryInstrumentStatusField {
    PyObject_HEAD
    CThostFtdcQryInstrumentStatusField data;
} PyCThostFtdcQryInstrumentStatusField;

extern PyTypeObject PyCThostFtdcQryInstrumentStatusFieldType;

extern int PyCThostFtdcQryInstrumentStatusFieldType_init(PyObject *module);

#endif
