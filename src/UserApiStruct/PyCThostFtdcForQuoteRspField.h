#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFORQUOTERSPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCFORQUOTERSPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcForQuoteRspField {
    PyObject_HEAD
    CThostFtdcForQuoteRspField data;
} PyCThostFtdcForQuoteRspField;

extern PyTypeObject PyCThostFtdcForQuoteRspFieldType;

extern int PyCThostFtdcForQuoteRspFieldType_init(PyObject *module);

#endif
