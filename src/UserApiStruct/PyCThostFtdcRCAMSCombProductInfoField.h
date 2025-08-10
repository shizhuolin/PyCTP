#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSCOMBPRODUCTINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRCAMSCOMBPRODUCTINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///RCAMS产品组合信息

typedef struct PyCThostFtdcRCAMSCombProductInfoField {
    PyObject_HEAD
    CThostFtdcRCAMSCombProductInfoField data;
} PyCThostFtdcRCAMSCombProductInfoField;

extern PyTypeObject PyCThostFtdcRCAMSCombProductInfoFieldType;

extern int PyCThostFtdcRCAMSCombProductInfoFieldType_init(PyObject *module);

#endif
