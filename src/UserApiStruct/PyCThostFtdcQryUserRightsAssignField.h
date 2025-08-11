#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYUSERRIGHTSASSIGNFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYUSERRIGHTSASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcQryUserRightsAssignField {
    PyObject_HEAD
    CThostFtdcQryUserRightsAssignField data;
} PyCThostFtdcQryUserRightsAssignField;

extern PyTypeObject PyCThostFtdcQryUserRightsAssignFieldType;

extern int PyCThostFtdcQryUserRightsAssignFieldType_init(PyObject *module);

#endif
