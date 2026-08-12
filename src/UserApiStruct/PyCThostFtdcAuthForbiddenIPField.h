#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAUTHFORBIDDENIPFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAUTHFORBIDDENIPFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///禁止认证IP

typedef struct PyCThostFtdcAuthForbiddenIPField {
    PyObject_HEAD
    CThostFtdcAuthForbiddenIPField data;
} PyCThostFtdcAuthForbiddenIPField;

extern PyTypeObject PyCThostFtdcAuthForbiddenIPFieldType;

extern int PyCThostFtdcAuthForbiddenIPFieldType_init(PyObject *module);

#endif
