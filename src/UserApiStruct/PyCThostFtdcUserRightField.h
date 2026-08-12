#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERRIGHTFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCUSERRIGHTFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///用户权限

typedef struct PyCThostFtdcUserRightField {
    PyObject_HEAD
    CThostFtdcUserRightField data;
} PyCThostFtdcUserRightField;

extern PyTypeObject PyCThostFtdcUserRightFieldType;

extern int PyCThostFtdcUserRightFieldType_init(PyObject *module);

#endif
