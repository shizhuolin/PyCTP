#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORINFOCNTSETTINGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORINFOCNTSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorInfoCntSettingField {
    PyObject_HEAD
    CThostFtdcInvestorInfoCntSettingField data;
} PyCThostFtdcInvestorInfoCntSettingField;

extern PyTypeObject PyCThostFtdcInvestorInfoCntSettingFieldType;

extern int PyCThostFtdcInvestorInfoCntSettingFieldType_init(PyObject *module);

#endif
