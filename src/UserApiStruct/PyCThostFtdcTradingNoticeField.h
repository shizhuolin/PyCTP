#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGNOTICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCTRADINGNOTICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcTradingNoticeField {
    PyObject_HEAD
    CThostFtdcTradingNoticeField data;
} PyCThostFtdcTradingNoticeField;

extern PyTypeObject PyCThostFtdcTradingNoticeFieldType;

extern int PyCThostFtdcTradingNoticeFieldType_init(PyObject *module);

#endif
