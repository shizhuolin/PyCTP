#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMINVESTORPORTFDEFFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSPBMINVESTORPORTFDEFFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者套餐选择查询

typedef struct PyCThostFtdcQrySPBMInvestorPortfDefField {
    PyObject_HEAD
    CThostFtdcQrySPBMInvestorPortfDefField data;
} PyCThostFtdcQrySPBMInvestorPortfDefField;

extern PyTypeObject PyCThostFtdcQrySPBMInvestorPortfDefFieldType;

extern int PyCThostFtdcQrySPBMInvestorPortfDefFieldType_init(PyObject *module);

#endif
