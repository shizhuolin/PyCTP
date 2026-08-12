#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORINFOCOMMRECFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORINFOCOMMRECFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者申报费阶梯收取记录查询

typedef struct PyCThostFtdcQryInvestorInfoCommRecField {
    PyObject_HEAD
    CThostFtdcQryInvestorInfoCommRecField data;
} PyCThostFtdcQryInvestorInfoCommRecField;

extern PyTypeObject PyCThostFtdcQryInvestorInfoCommRecFieldType;

extern int PyCThostFtdcQryInvestorInfoCommRecFieldType_init(PyObject *module);

#endif
