#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBINATIONLEGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBINATIONLEGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryCombinationLegField {
    PyObject_HEAD
    CThostFtdcQryCombinationLegField data;
} PyCThostFtdcQryCombinationLegField;

extern PyTypeObject PyCThostFtdcQryCombinationLegFieldType;

extern int PyCThostFtdcQryCombinationLegFieldType_init(PyObject *module);

#endif
