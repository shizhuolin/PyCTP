#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERRIGHTASSIGNFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERRIGHTASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>



typedef struct PyCThostFtdcBrokerUserRightAssignField {
    PyObject_HEAD
    CThostFtdcBrokerUserRightAssignField data;
} PyCThostFtdcBrokerUserRightAssignField;

extern PyTypeObject PyCThostFtdcBrokerUserRightAssignFieldType;

extern int PyCThostFtdcBrokerUserRightAssignFieldType_init(PyObject *module);

#endif
