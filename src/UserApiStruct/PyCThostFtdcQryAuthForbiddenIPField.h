#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYAUTHFORBIDDENIPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYAUTHFORBIDDENIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询禁止认证IP

typedef struct PyCThostFtdcQryAuthForbiddenIPField {
    PyObject_HEAD
    CThostFtdcQryAuthForbiddenIPField data;
} PyCThostFtdcQryAuthForbiddenIPField;

extern PyTypeObject PyCThostFtdcQryAuthForbiddenIPFieldType;

extern int PyCThostFtdcQryAuthForbiddenIPFieldType_init(PyObject *module);

#endif
