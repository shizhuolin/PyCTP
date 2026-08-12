#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERRIGHTASSIGNFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCBROKERUSERRIGHTASSIGNFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///经济公司是否有在本标示的交易权限

typedef struct PyCThostFtdcBrokerUserRightAssignField {
    PyObject_HEAD
    CThostFtdcBrokerUserRightAssignField data;
} PyCThostFtdcBrokerUserRightAssignField;

extern PyTypeObject PyCThostFtdcBrokerUserRightAssignFieldType;

extern int PyCThostFtdcBrokerUserRightAssignFieldType_init(PyObject *module);

#endif
