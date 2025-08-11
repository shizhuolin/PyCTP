#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBINSTRUMENTGUARDFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBINSTRUMENTGUARDFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryCombInstrumentGuardField {
    PyObject_HEAD
    CThostFtdcQryCombInstrumentGuardField data;
} PyCThostFtdcQryCombInstrumentGuardField;

extern PyTypeObject PyCThostFtdcQryCombInstrumentGuardFieldType;

extern int PyCThostFtdcQryCombInstrumentGuardFieldType_init(PyObject *module);

#endif
