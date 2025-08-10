#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPQUERYACCOUNTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPQUERYACCOUNTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询账户信息响应

typedef struct PyCThostFtdcRspQueryAccountField {
    PyObject_HEAD
    CThostFtdcRspQueryAccountField data;
} PyCThostFtdcRspQueryAccountField;

extern PyTypeObject PyCThostFtdcRspQueryAccountFieldType;

extern int PyCThostFtdcRspQueryAccountFieldType_init(PyObject *module);

#endif
