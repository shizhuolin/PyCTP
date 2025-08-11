#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGNOTICEINFOFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGNOTICEINFOFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTradingNoticeInfoField {
    PyObject_HEAD
    CThostFtdcTradingNoticeInfoField data;
} PyCThostFtdcTradingNoticeInfoField;

extern PyTypeObject PyCThostFtdcTradingNoticeInfoFieldType;

extern int PyCThostFtdcTradingNoticeInfoFieldType_init(PyObject *module);

#endif
