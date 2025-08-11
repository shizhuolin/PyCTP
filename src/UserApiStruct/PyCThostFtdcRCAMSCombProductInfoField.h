#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSCOMBPRODUCTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSCOMBPRODUCTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcRCAMSCombProductInfoField {
    PyObject_HEAD
    CThostFtdcRCAMSCombProductInfoField data;
} PyCThostFtdcRCAMSCombProductInfoField;

extern PyTypeObject PyCThostFtdcRCAMSCombProductInfoFieldType;

extern int PyCThostFtdcRCAMSCombProductInfoFieldType_init(PyObject *module);

#endif
