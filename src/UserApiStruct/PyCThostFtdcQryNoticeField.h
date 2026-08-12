#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYNOTICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYNOTICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询客户通知

typedef struct PyCThostFtdcQryNoticeField {
    PyObject_HEAD
    CThostFtdcQryNoticeField data;
} PyCThostFtdcQryNoticeField;

extern PyTypeObject PyCThostFtdcQryNoticeFieldType;

extern int PyCThostFtdcQryNoticeFieldType_init(PyObject *module);

#endif
