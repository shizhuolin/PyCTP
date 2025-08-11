#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSCOMBPRODUCTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYRCAMSCOMBPRODUCTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryRCAMSCombProductInfoField {
    PyObject_HEAD
    CThostFtdcQryRCAMSCombProductInfoField data;
} PyCThostFtdcQryRCAMSCombProductInfoField;

extern PyTypeObject PyCThostFtdcQryRCAMSCombProductInfoFieldType;

extern int PyCThostFtdcQryRCAMSCombProductInfoFieldType_init(PyObject *module);

#endif
