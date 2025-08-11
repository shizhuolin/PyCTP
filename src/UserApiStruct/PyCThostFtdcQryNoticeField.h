#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYNOTICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYNOTICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryNoticeField {
    PyObject_HEAD
    CThostFtdcQryNoticeField data;
} PyCThostFtdcQryNoticeField;

extern PyTypeObject PyCThostFtdcQryNoticeFieldType;

extern int PyCThostFtdcQryNoticeFieldType_init(PyObject *module);

#endif
