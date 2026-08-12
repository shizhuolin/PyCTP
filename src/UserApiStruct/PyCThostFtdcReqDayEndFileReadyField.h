#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQDAYENDFILEREADYFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCREQDAYENDFILEREADYFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///日终文件就绪请求

typedef struct PyCThostFtdcReqDayEndFileReadyField {
    PyObject_HEAD
    CThostFtdcReqDayEndFileReadyField data;
} PyCThostFtdcReqDayEndFileReadyField;

extern PyTypeObject PyCThostFtdcReqDayEndFileReadyFieldType;

extern int PyCThostFtdcReqDayEndFileReadyFieldType_init(PyObject *module);

#endif
