#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCLASSIFIEDINSTRUMENTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCLASSIFIEDINSTRUMENTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询分类合约

typedef struct PyCThostFtdcQryClassifiedInstrumentField {
    PyObject_HEAD
    CThostFtdcQryClassifiedInstrumentField data;
} PyCThostFtdcQryClassifiedInstrumentField;

extern PyTypeObject PyCThostFtdcQryClassifiedInstrumentFieldType;

extern int PyCThostFtdcQryClassifiedInstrumentFieldType_init(PyObject *module);

#endif
