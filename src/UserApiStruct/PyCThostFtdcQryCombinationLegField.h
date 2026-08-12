#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBINATIONLEGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYCOMBINATIONLEGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询组合合约分腿

typedef struct PyCThostFtdcQryCombinationLegField {
    PyObject_HEAD
    CThostFtdcQryCombinationLegField data;
} PyCThostFtdcQryCombinationLegField;

extern PyTypeObject PyCThostFtdcQryCombinationLegFieldType;

extern int PyCThostFtdcQryCombinationLegFieldType_init(PyObject *module);

#endif
