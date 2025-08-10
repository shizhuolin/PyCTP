#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTICEFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCNOTICEFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///客户通知

typedef struct PyCThostFtdcNoticeField {
    PyObject_HEAD
    CThostFtdcNoticeField data;
} PyCThostFtdcNoticeField;

extern PyTypeObject PyCThostFtdcNoticeFieldType;

extern int PyCThostFtdcNoticeFieldType_init(PyObject *module);

#endif
