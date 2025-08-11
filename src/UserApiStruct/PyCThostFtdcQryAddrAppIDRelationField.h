#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYADDRAPPIDRELATIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYADDRAPPIDRELATIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryAddrAppIDRelationField {
    PyObject_HEAD
    CThostFtdcQryAddrAppIDRelationField data;
} PyCThostFtdcQryAddrAppIDRelationField;

extern PyTypeObject PyCThostFtdcQryAddrAppIDRelationFieldType;

extern int PyCThostFtdcQryAddrAppIDRelationFieldType_init(PyObject *module);

#endif
