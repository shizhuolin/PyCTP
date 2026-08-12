#ifndef PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSUPERUSERFIELD_H
#define PYCTP_USERAPISTRUCT_PYCTHOSTFTDCQRYSUPERUSERFIELD_H

#include "../stdafx.h"
#include <ThostFtdcUserApiStruct.h>

///查询管理用户

typedef struct PyCThostFtdcQrySuperUserField {
    PyObject_HEAD
    CThostFtdcQrySuperUserField data;
} PyCThostFtdcQrySuperUserField;

extern PyTypeObject PyCThostFtdcQrySuperUserFieldType;

extern int PyCThostFtdcQrySuperUserFieldType_init(PyObject *module);

#endif
