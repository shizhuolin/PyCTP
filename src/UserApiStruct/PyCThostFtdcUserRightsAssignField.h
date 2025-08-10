#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERRIGHTSASSIGNFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERRIGHTSASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///灾备中心交易权限

typedef struct PyCThostFtdcUserRightsAssignField {
    PyObject_HEAD
    CThostFtdcUserRightsAssignField data;
} PyCThostFtdcUserRightsAssignField;

extern PyTypeObject PyCThostFtdcUserRightsAssignFieldType;

extern int PyCThostFtdcUserRightsAssignFieldType_init(PyObject *module);

#endif
