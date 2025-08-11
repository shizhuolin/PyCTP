#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORRESERVEINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORRESERVEINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorReserveInfoField {
    PyObject_HEAD
    CThostFtdcInvestorReserveInfoField data;
} PyCThostFtdcInvestorReserveInfoField;

extern PyTypeObject PyCThostFtdcInvestorReserveInfoFieldType;

extern int PyCThostFtdcInvestorReserveInfoFieldType_init(PyObject *module);

#endif
