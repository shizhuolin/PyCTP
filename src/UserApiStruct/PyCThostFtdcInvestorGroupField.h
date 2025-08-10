#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORGROUPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORGROUPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者组

typedef struct PyCThostFtdcInvestorGroupField {
    PyObject_HEAD
    CThostFtdcInvestorGroupField data;
} PyCThostFtdcInvestorGroupField;

extern PyTypeObject PyCThostFtdcInvestorGroupFieldType;

extern int PyCThostFtdcInvestorGroupFieldType_init(PyObject *module);

#endif
