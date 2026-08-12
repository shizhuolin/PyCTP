#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAPPIDAUTHASSIGNFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCAPPIDAUTHASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///App客户端权限分配

typedef struct PyCThostFtdcAppIDAuthAssignField {
    PyObject_HEAD
    CThostFtdcAppIDAuthAssignField data;
} PyCThostFtdcAppIDAuthAssignField;

extern PyTypeObject PyCThostFtdcAppIDAuthAssignFieldType;

extern int PyCThostFtdcAppIDAuthAssignFieldType_init(PyObject *module);

#endif
