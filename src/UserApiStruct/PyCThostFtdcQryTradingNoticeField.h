#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADINGNOTICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADINGNOTICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryTradingNoticeField {
    PyObject_HEAD
    CThostFtdcQryTradingNoticeField data;
} PyCThostFtdcQryTradingNoticeField;

extern PyTypeObject PyCThostFtdcQryTradingNoticeFieldType;

extern int PyCThostFtdcQryTradingNoticeFieldType_init(PyObject *module);

#endif
