#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORINFOCOMMRECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORINFOCOMMRECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorInfoCommRecField {
    PyObject_HEAD
    CThostFtdcInvestorInfoCommRecField data;
} PyCThostFtdcInvestorInfoCommRecField;

extern PyTypeObject PyCThostFtdcInvestorInfoCommRecFieldType;

extern int PyCThostFtdcInvestorInfoCommRecFieldType_init(PyObject *module);

#endif
