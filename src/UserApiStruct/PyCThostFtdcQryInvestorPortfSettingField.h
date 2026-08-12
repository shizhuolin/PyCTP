#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPORTFSETTINGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYINVESTORPORTFSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///投资者新组保设置查询

typedef struct PyCThostFtdcQryInvestorPortfSettingField {
    PyObject_HEAD
    CThostFtdcQryInvestorPortfSettingField data;
} PyCThostFtdcQryInvestorPortfSettingField;

extern PyTypeObject PyCThostFtdcQryInvestorPortfSettingFieldType;

extern int PyCThostFtdcQryInvestorPortfSettingFieldType_init(PyObject *module);

#endif
