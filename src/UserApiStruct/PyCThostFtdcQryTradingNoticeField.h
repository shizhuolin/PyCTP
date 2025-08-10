#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADINGNOTICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYTRADINGNOTICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询交易事件通知

typedef struct PyCThostFtdcQryTradingNoticeField {
    PyObject_HEAD
    CThostFtdcQryTradingNoticeField data;
} PyCThostFtdcQryTradingNoticeField;

extern PyTypeObject PyCThostFtdcQryTradingNoticeFieldType;

extern int PyCThostFtdcQryTradingNoticeFieldType_init(PyObject *module);

#endif
