#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBINSTRUMENTGUARDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBINSTRUMENTGUARDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///组合合约安全系数查询

typedef struct PyCThostFtdcQryCombInstrumentGuardField {
    PyObject_HEAD
    CThostFtdcQryCombInstrumentGuardField data;
} PyCThostFtdcQryCombInstrumentGuardField;

extern PyTypeObject PyCThostFtdcQryCombInstrumentGuardFieldType;

extern int PyCThostFtdcQryCombInstrumentGuardFieldType_init(PyObject *module);

#endif
