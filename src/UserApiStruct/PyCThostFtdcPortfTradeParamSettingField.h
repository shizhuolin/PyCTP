#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPORTFTRADEPARAMSETTINGFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCPORTFTRADEPARAMSETTINGFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcPortfTradeParamSettingField {
    PyObject_HEAD
    CThostFtdcPortfTradeParamSettingField data;
} PyCThostFtdcPortfTradeParamSettingField;

extern PyTypeObject PyCThostFtdcPortfTradeParamSettingFieldType;

extern int PyCThostFtdcPortfTradeParamSettingFieldType_init(PyObject *module);

#endif
