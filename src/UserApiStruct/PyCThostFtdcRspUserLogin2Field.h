#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPUSERLOGIN2FIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCRSPUSERLOGIN2FIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户登录应答2

typedef struct PyCThostFtdcRspUserLogin2Field {
    PyObject_HEAD
    CThostFtdcRspUserLogin2Field data;
} PyCThostFtdcRspUserLogin2Field;

extern PyTypeObject PyCThostFtdcRspUserLogin2FieldType;

extern int PyCThostFtdcRspUserLogin2FieldType_init(PyObject *module);

#endif
