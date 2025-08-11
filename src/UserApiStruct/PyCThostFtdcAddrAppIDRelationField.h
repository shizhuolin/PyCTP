#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCADDRAPPIDRELATIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCADDRAPPIDRELATIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcAddrAppIDRelationField {
    PyObject_HEAD
    CThostFtdcAddrAppIDRelationField data;
} PyCThostFtdcAddrAppIDRelationField;

extern PyTypeObject PyCThostFtdcAddrAppIDRelationFieldType;

extern int PyCThostFtdcAddrAppIDRelationFieldType_init(PyObject *module);

#endif
