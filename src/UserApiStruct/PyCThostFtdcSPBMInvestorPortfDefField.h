#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMINVESTORPORTFDEFFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCSPBMINVESTORPORTFDEFFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcSPBMInvestorPortfDefField {
    PyObject_HEAD
    CThostFtdcSPBMInvestorPortfDefField data;
} PyCThostFtdcSPBMInvestorPortfDefField;

extern PyTypeObject PyCThostFtdcSPBMInvestorPortfDefFieldType;

extern int PyCThostFtdcSPBMInvestorPortfDefFieldType_init(PyObject *module);

#endif
