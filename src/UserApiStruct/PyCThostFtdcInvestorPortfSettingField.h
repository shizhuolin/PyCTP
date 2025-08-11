#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPORTFSETTINGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCINVESTORPORTFSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcInvestorPortfSettingField {
    PyObject_HEAD
    CThostFtdcInvestorPortfSettingField data;
} PyCThostFtdcInvestorPortfSettingField;

extern PyTypeObject PyCThostFtdcInvestorPortfSettingFieldType;

extern int PyCThostFtdcInvestorPortfSettingFieldType_init(PyObject *module);

#endif
