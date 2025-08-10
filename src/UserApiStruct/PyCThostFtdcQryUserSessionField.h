#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYUSERSESSIONFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYUSERSESSIONFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询用户会话

typedef struct PyCThostFtdcQryUserSessionField {
    PyObject_HEAD
    CThostFtdcQryUserSessionField data;
} PyCThostFtdcQryUserSessionField;

extern PyTypeObject PyCThostFtdcQryUserSessionFieldType;

extern int PyCThostFtdcQryUserSessionFieldType_init(PyObject *module);

#endif
