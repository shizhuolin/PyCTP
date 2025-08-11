#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERRIGHTSASSIGNFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERRIGHTSASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcUserRightsAssignField {
    PyObject_HEAD
    CThostFtdcUserRightsAssignField data;
} PyCThostFtdcUserRightsAssignField;

extern PyTypeObject PyCThostFtdcUserRightsAssignFieldType;

extern int PyCThostFtdcUserRightsAssignFieldType_init(PyObject *module);

#endif
