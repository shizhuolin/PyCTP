#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORINFOCNTSETTINGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORINFOCNTSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者申报费阶梯收取设置

typedef struct PyCThostFtdcInvestorInfoCntSettingField {
    PyObject_HEAD
    CThostFtdcInvestorInfoCntSettingField data;
} PyCThostFtdcInvestorInfoCntSettingField;

extern PyTypeObject PyCThostFtdcInvestorInfoCntSettingFieldType;

extern int PyCThostFtdcInvestorInfoCntSettingFieldType_init(PyObject *module);

#endif
